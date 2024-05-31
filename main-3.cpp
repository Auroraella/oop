// main-3.cpp
#include "Game.h"

int main() {
  Game game;
  game.initGame(2, 3, 10, 10);
  game.gameLoop(20, 2.0);

  return 0;
}