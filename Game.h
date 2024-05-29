#ifndef GAME_H
#define GAME_H

#include <vector>
#include <iostream>
#include "Ship.h"
#include "Mine.h"
#include "Utils.h"

class Game {
public:
    std::vector<GameEntity*> get_entities() const {
        return entities;
    }

    void set_entities(const std::vector<GameEntity*>& newEntities) {
        entities = newEntities;
    }

    std::vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth, int gridHeight) {
        entities.clear();
        for (int i = 0; i < numShips; ++i) {
            auto pos = Utils::generateRandomPos(gridWidth, gridHeight);
            entities.push_back(new Ship(std::get<0>(pos), std::get<1>(pos)));
        }
        for (int i = 0; i < numMines; ++i) {
            auto pos = Utils::generateRandomPos(gridWidth, gridHeight);
            entities.push_back(new Mine(std::get<0>(pos), std::get<1>(pos)));
        }
        return entities;
    }

    void gameLoop(int maxIterations, double mineDistanceThreshold) {
        for (int iteration = 0; iteration < maxIterations; ++iteration) {
            std::cout << "Iteration: " << iteration << "\n";

            // Move all ships
            for (auto entity : entities) {
                Ship* ship = dynamic_cast<Ship*>(entity);
                if (ship) {
                    ship->move(1, 0);  // Example move right by 1
                    std::cout << "Ship moved to: (" << std::get<0>(ship->getPos()) << ", " << std::get<1>(ship->getPos()) << ")\n";
                }
            }

            // Check distance between ships and mines
            for (auto entity : entities) {
                Ship* ship = dynamic_cast<Ship*>(entity);
                if (ship) {
                    for (auto otherEntity : entities) {
                        Mine* mine = dynamic_cast<Mine*>(otherEntity);
                        if (mine) {
                            double distance = Utils::calculateDistance(ship->getPos(), mine->getPos());
                            if (distance < mineDistanceThreshold) {
                                Explosion explosion = mine->explode();
                                explosion.apply(*ship);
                                std::cout << "Mine exploded at: (" << std::get<0>(mine->getPos()) << ", " << std::get<1>(mine->getPos()) << ")\n";
                                std::cout << "Ship destroyed at: (" << std::get<0>(ship->getPos()) << ", " << std::get<1>(ship->getPos()) << ")\n";
                            }
                        }
                    }
                }
            }

            // Check for termination condition (all ships destroyed)
            bool allShipsDestroyed = true;
            for (auto entity : entities) {
                Ship* ship = dynamic_cast<Ship*>(entity);
                if (ship && ship->getType() != 'X') {
                    allShipsDestroyed = false;
                    break;
                }
            }

            if (allShipsDestroyed) {
                std::cout << "All ships destroyed. Ending game.\n";
                break;
            }
        }
    }

    ~Game() {
        for (auto entity : entities) {
            delete entity;
        }
    }

private:
    std::vector<GameEntity*> entities;
};

#endif // GAME_H
