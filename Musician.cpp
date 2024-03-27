// #include "Musician.h"

// Musician::Musician() ...

// Musician::Musician(std::string instrument, int experience) ...

// std::string Musician::get_instrument()...

// int Musician::get_experience() ...

#include "Musician.h"

// Default constructor
Musician::Musician() : instrument("null"), experience(0) {}

// Constructor with parameters
Musician::Musician(std::string instrument, int experience) : instrument(instrument), experience(experience) {}

// Getter for instrument
std::string Musician::get_instrument() {
    return instrument;
}

// Getter for experience
int Musician::get_experience() {
    return experience;
}

// Setter for instrument
void Musician::set_instrument(std::string new_instrument) {
    instrument = new_instrument;
}

// Setter for experience
void Musician::set_experience(int new_experience) {
    experience = new_experience;
}
