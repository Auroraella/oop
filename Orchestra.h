#ifndef ORCHESTRA_H
#define ORCHESTRA_H

#include "Musician.h"

class Orchestra {
private:
    int max_size;
    int current_size;
    Musician* members;

public:
    // Constructors
    Orchestra();
    Orchestra(int size);

    // Destructor
    ~Orchestra();

    // Getter for current number of members
    int get_current_number_of_members();

    // Check if any musician in the orchestra plays the specified instrument
    bool has_instrument(std::string instrument);

    // Getter for members
    Musician* get_members();

    // Add a new musician to the orchestra if not full
    bool add_musician(Musician new_musician);
};

#endif // ORCHESTRA_H
