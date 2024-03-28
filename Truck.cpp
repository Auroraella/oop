#include "Truck.h"

// Default constructor
Truck::Truck() : b_name(""), b_code(0) {}

// Constructor with parameters
Truck::Truck(int b_code, std::string b_name) : b_code(b_code), b_name(b_name) {}

// Getter for name
std::string Truck::get_brand_name() {
    return b_name;
}

// Getter for code
int Truck::get_brand_code() {
    return b_code;
}