#include "Bike.h"

// Default constructor
Bike::Bike() : name(""), code(0) {}

// Constructor with parameters
Bike::Bike(std::string name, int code) : name(name), code(code) {}

// Getter for name
std::string Bike::get_name() {
    return name;
}

// Getter for code
int Bike::get_code() {
    return code;
}

// // Setter for name
// void Bike::set_name(std::string new_name) {
//     name = new_name;
// }

// // Setter for code
// void Bike::set_code(int new_code) {
//     code = new_code;
// }