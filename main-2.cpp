#include <iostream>
#include "Ship.h"
#include "Mine.h"
#include "Explosion.h"

int main() {
    // Create a Ship and a Mine
    Ship ship(5, 5);
    Mine mine(7, 7);

    // Move the Ship
    ship.move(2, -1);
    std::cout << "Ship Position after move: (" << std::get<0>(ship.getPos()) << ", " << std::get<1>(ship.getPos()) << ")\n";

    // Explode the Mine
    Explosion explosion = mine.explode();
    std::cout << "Mine Position after explode: (" << std::get<0>(mine.getPos()) << ", " << std::get<1>(mine.getPos()) << ")\n";
    std::cout << "Mine Type after explode: " << mine.getType() << "\n";

    // Apply Explosion to the Ship
    explosion.apply(ship);
    std::cout << "Ship Position after explosion: (" << std::get<0>(ship.getPos()) << ", " << std::get<1>(ship.getPos()) << ")\n";
    std::cout << "Ship Type after explosion: " << ship.getType() << "\n";

    return 0;
}
