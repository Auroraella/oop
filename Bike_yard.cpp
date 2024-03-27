#include "Bike_yard.h"
#include <stdexcept>

Bike_yard::Bike_yard() : max_capacity(0), current_size(0), bikes(nullptr) {}

Bike_yard::Bike_yard(int capacity) : max_capacity(capacity), current_size(0) {
    bikes = new Bike[capacity];
}

Bike_yard::~Bike_yard() {
    delete[] bikes;
}

int Bike_yard::get_current_number_of_Bike() {
    return current_size;
}

int Bike_yard::has_code(int code) {
    int count = 0;
    for (int i = 0; i < current_size; ++i) {
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
    if (current_size < max_capacity) {
        bikes[current_size] = new_bike;
        current_size++;
        return true;
    } else {
        return false;
    }
}
