#include <iostream>
#include "GameEntity.h"
#include "Utils.h"

int main() {
    srand(static_cast<unsigned int>(time(0))); // Seed for random number generation

    int gridWidth = 10;
    int gridHeight = 10;

    // Generate random positions
    auto pos1 = Utils::generateRandomPos(gridWidth, gridHeight);
    auto pos2 = Utils::generateRandomPos(gridWidth, gridHeight);

    std::cout << "Position 1: (" << std::get<0>(pos1) << ", " << std::get<1>(pos1) << ")\n";
    std::cout << "Position 2: (" << std::get<0>(pos2) << ", " << std::get<1>(pos2) << ")\n";

    // Calculate distance between positions
    double distance = Utils::calculateDistance(pos1, pos2);
    std::cout << "Distance between positions: " << distance << "\n";

    // Create a GameEntity and test its methods
    GameEntity entity(std::get<0>(pos1), std::get<1>(pos1), 'A');
    std::cout << "GameEntity Position: (" << std::get<0>(entity.getPos()) << ", " << std::get<1>(entity.getPos()) << ")\n";
    std::cout << "GameEntity Type: " << entity.getType() << "\n";

    return 0;
}
