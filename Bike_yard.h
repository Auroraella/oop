#ifndef BIKE_YARD_H
#define BIKE_YARD_H

#include "Bike.h"

class Bike_yard {
private:
    int max_capacity;
    int current_size;
    Bike* bikes;

public:
    // Constructors
    Bike_yard();
    Bike_yard(int capacity);

    // Destructor
    ~Bike_yard();

    // Getter for current number of bikes
    int get_current_number_of_Bike();

    // Check if any bike in the bike yard has the specified code
    int has_code(int code);

    // Getter for bikes
    Bike* get_bikes();

    // Add a new bike to the bike yard if not full
    bool add_bike(Bike new_bike);
};

#endif // BIKE_YARD_H
