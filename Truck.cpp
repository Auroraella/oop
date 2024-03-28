#include "Truck.h"

// Default constructor
Truck::Truck() : b_name(""), b_code(0) {}

// Constructor with parameters
Truck::Truck(std::string b_name, int b_code) : b_name(b_name), b_code(b_code) {}

// Getter for name
std::string Truck::get_brand_name() {
    return b_name;
}

// Getter for code
int Truck::get_brand_code() {
    return b_code;
}

// // Setter for name
// void Bike::set_name(std::string new_name) {
//     name = new_name;
// }

// // Setter for code
// void Bike::set_code(int new_code) {
//     code = new_code;
// }