#include "warrior.h"
#include <iostream>

Warrior::Warrior(std::string name, int health, int damage, std::string weapon)
    : Player(name, health, damage), weapon(weapon) {}

std::string Warrior::getWeapon() const {
    return weapon;
}

void Warrior::swingWeapon(Player* opponent) {
    opponent->takeDamage(getDamage());
    std::cout << getName() << " swings their " << getWeapon() << " at " << opponent->getName() << "!\n";
}
