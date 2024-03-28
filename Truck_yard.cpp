#include "Truck_yard.h"

// Default constructor
Truck_yard::Truck_yard() : capacity(0), current_stock(0), trucks(nullptr) {}


// Constructor with parameters
Truck_yard::Truck_yard(int capacity) : capacity(capacity), current_stock(0) {
    trucks = new Truck[capacity];
    //trucks = Truck*[capacity];
}


// Destructor
Truck_yard::~Truck_yard() {
    delete[] trucks;
}

int Truck_yard::get_total_stock_count() {
    return current_stock;
}

int Truck_yard::get_stock_count(int code) {
    int count = 0;
    for (int i = 0; i < current_stock; i++) {
        if (trucks[i].get_brand_code() == code) {
            count++;
        }
    }
    return count;
}

Truck* Truck_yard::get_current_stock_list() {
    return trucks;
    //retun Truck_yard*
}

bool Truck_yard::addStock(Truck new_truck) {
    if (current_stock < capacity) {
        trucks[current_stock++] = new_truck;
        return true;
    }
    return false;
}

