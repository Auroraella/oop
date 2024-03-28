#include "Bike_yard.h"

// Default constructor
Bike_yard::Bike_yard() : capacity(0), current_size(0), bikes(nullptr) {}
// Bike_yard::Bike_yard() : Bike_yard(0) {}

// Constructor with parameters
Bike_yard::Bike_yard(int capacity) : capacity(capacity), current_size(0) {
    bikes = new Bike[capacity];
}


// Destructor
Bike_yard::~Bike_yard() {
    delete[] bikes;
}

int Bike_yard::get_current_number_of_Bike() {
    return current_size;
}

int Bike_yard::has_code(int code) {
    int count = 0;
    for (int i = 0; i < current_size; i++) {
        if (bikes[i].get_code() == code) {
            count++;
        }
    }
    return count;
}

Bike* Bike_yard::get_bikes() {
    return bikes;
}

bool Bike_yard::add_bike(Bike new_bike) {
// bool Bike_yard::add_bike(const Bike& new_bike) {
    if (current_size < capacity) {
        bikes[current_size++] = new_bike;
        return true;
    }
    return false;
}

