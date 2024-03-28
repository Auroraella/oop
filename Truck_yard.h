#ifndef TRUCK_YARD_H
#define TRUCK_YARD_H

#include "Truck.h" // Assuming Bike class is defined elsewhere

class Truck_yard {

private:
    int capacity;
    int current_stock;
    Truck_yard* trucks;

public:
    // Constructors
    Truck_yard(); // Default constructor
    Truck_yard(int capacity); // Constructor with capacity

    // Destructor
    ~Truck_yard();

    // Public methods
    int get_total_stock_count();
    int get_stock_count(int code);
    Truck* get_current_stock_list(); // returns an array containing all the trucks in the yard
    bool addStock(Truck c); // tries to add a truck to yard. If there is enough space, return true
};

#endif
