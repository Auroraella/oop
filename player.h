#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
protected:
    std::string name;
    int health;
    int damage;

public:
    Player(std::string name, int health, int damage);
    
    // Getters
    std::string getName() const;
    int getHealth() const;
    int getDamage() const;

    // Setters
    void setHealth(int newHealth);

    void attack(Player* opponent, int damage);
    void takeDamage(int damage);
};

#endif // PLAYER_H
