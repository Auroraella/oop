#ifndef GAME_H
#define GAME_H
#include "Cell.h"
#include "Character.h"
#include "Trap.h"
#include "Utils.h"
#include <iostream>
#include <vector>

class Game {
private:
  std::vector<Cell*> grid;
  int gridWidth;
  int gridHeight;

public:
  Game() {}

  std::vector<Cell*>& getGrid() { return grid; }

  void initGame(int numCharacters, int numTraps, int gridWidth, int gridHeight) {
    this->gridWidth = gridWidth;
    this->gridHeight = gridHeight;

    for (int i = 0; i < numCharacters; i++) {
      std::tuple<int, int> coords = Utils::generateRandomPos(gridWidth, gridHeight);
      grid.push_back(new Character(std::get<0>(coords), std::get<1>(coords)));
    }

    for (int i = 0; i < numTraps; i++) {
      std::tuple<int, int> coords = Utils::generateRandomPos(gridWidth, gridHeight);
      grid.push_back(new Trap(std::get<0>(coords), std::get<1>(coords)));
    }
  }

  void gameLoop(int maxIterations, double trapActivationDistance) {
    for (int iteration = 0; iteration < maxIterations; iteration++) {
      for (Cell* cell : grid) {
        if (cell->getType() == 'C') {
          Character* character = static_cast<Character*>(cell);
          character->move(1, 0);
          for (Cell* otherCell : grid) {
            if (otherCell->getType() == 'T') {
              Trap* trap = static_cast<Trap*>(otherCell);
              if (trap->isActive() && Utils::calculateDistance(character->getPos(), trap->getPos()) <= trapActivationDistance) {
                trap->apply(*character);
              }
            }
          }
          if (iteration == maxIterations - 1 && (std::get<0>(character->getPos()) >= gridWidth || std::get<1>(character->getPos()) >= gridHeight)) {
            std::cout << "Character has won the game!" << std::endl;
            return;
          }
        }
      }
    }
    std::cout << "Maximum number of iterations reached. Game over." << std::endl;
  }
};

#endif // !GAME_H