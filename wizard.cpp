#include "wizard.h"
#include <iostream>

Wizard::Wizard(std::string name, int health, int damage, int mana)
    : Player(name, health, damage), mana(mana) {}

int Wizard::getMana() const {
    return mana;
}

void Wizard::setMana(int newMana) {
    mana = newMana;
}

void Wizard::castSpell(Player* opponent) {
    if (mana >= getDamage()) {
        mana -= getDamage();
        opponent->takeDamage(getDamage());
        std::cout << getName() << " casts a spell on " << opponent->getName() << " for " << getDamage() << " damage.\n";
    } else {
        std::cout << getName() << " does not have enough mana to cast a spell.\n";
    }
}
