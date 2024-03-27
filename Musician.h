// #ifndef MUSICIAN_H
// #define MUSICIAN_H

// #include <string>

// class Musician {
// private:
    

// public:
//     Musician();
//     Musician(std::string instrument, int experience);
//     std::string get_instrument();
//     int get_experience();
// };

// #endif
#ifndef MUSICIAN_H
#define MUSICIAN_H

#include <string>

class Musician {
private:
    std::string instrument;
    int experience;

public:
    // Constructors
    Musician();
    Musician(std::string instrument, int experience);
    
    // Getter methods
    std::string get_instrument();
    int get_experience();

    // Setter methods
    void set_instrument(std::string new_instrument);
    void set_experience(int new_experience);
};

#endif // MUSICIAN_H
