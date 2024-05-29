#include <iostream>
#include "Game.h"

int main() {
    Game game;

    // Initialize the game with 3 ships, 2 mines, and a grid of 10x10
    game.initGame(3, 2, 10, 10);

    // Run the game loop with a maximum of 10 iterations and a mine distance threshold of 2.0
    game.gameLoop(10, 2.0);

    return 0;
}
