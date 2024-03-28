#include <iostream>
#include "Truck.h"

int main() {
    // Creating Bike objects using both constructors
    Truck t1; // Default constructor
    Truck t2(5, "A"); // Parameterized constructor
    
    // Displaying information for b1 (default constructor)
    std::cout << "Default name: " << t1.get_brand_name() << ", Default code: " << t1.get_brand_code() << std::endl;

    // Displaying information for b2 (parameterized constructor)
    std::cout << "Name: " << t2.get_brand_name() << ", Code: " << t2.get_brand_code() << std::endl;


    std::cout << "\nUpdated information for t1:\n";
    std::cout << "Name: " << t1.get_brand_name() << ", Code: " << t1.get_brand_code() << std::endl;

    return 0;
}
