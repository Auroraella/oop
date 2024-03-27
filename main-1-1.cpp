#include <iostream>
#include "Bike.h"

int main() {
    // Creating Bike objects using both constructors
    Bike b1; // Default constructor
    Bike b2("A", 5); // Parameterized constructor
    
    // Displaying information for b1 (default constructor)
    std::cout << "Default name: " << b1.get_name() << ", Default code: " << b1.get_code() << std::endl;

    // Displaying information for b2 (parameterized constructor)
    std::cout << "Name: " << b2.get_name() << ", Code: " << b2.get_code() << std::endl;

    // Testing setter methods
    b1.set_name("B");
    b1.set_code(3);

    std::cout << "\nUpdated information for b1:\n";
    std::cout << "Name: " << b1.get_name() << ", Code: " << b1.get_code() << std::endl;

    return 0;
}
