#ifndef BIKE_YARD_H
#define BIKE_YARD_H

#include "Bike.h" // Assuming Bike class is defined elsewhere

class Bike_yard {

private:
    int capacity;
    int current_size;
    Bike* bikes;

public:
    // Constructors
    Bike_yard(); // Default constructor
    Bike_yard(int capacity); // Constructor with capacity

    // Destructor
    ~Bike_yard();

    // Public methods
    int get_current_number_of_Bike();
    int has_code(int code);
    Bike* get_bikes();
    // bool add_bike(const Bike& new_bike); // Add a new bike
    bool add_bike(Bike b);
};

#endif // BIKE_YARD_H
