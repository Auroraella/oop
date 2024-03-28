#include <iostream>
#include "Bike.h"
#include "Bike_yard.h"

int main() {

    Bike_yard bikeYard(3);

    // Creating Bike objects using both constructors
    Bike b1("B1", 5); 
    Bike b2("B2", 5); 
    Bike b3("B3", 6); 
    Bike b4("B4", 10); 
    
    if (bikeYard.add_bike(b1)) {
        std::cout << "Bike added successfully!" << std::endl;
    } else {
        std::cout << "Failed to add bike. Bike yard is full." << std::endl;
    }

    if (bikeYard.add_bike(b2)) {
        std::cout << "Bike added successfully!" << std::endl;
    } else {
        std::cout << "Failed to add bike. Bike yard is full." << std::endl;
    }

    if (bikeYard.add_bike(b3)) {
        std::cout << "Bike added successfully!" << std::endl;
    } else {
        std::cout << "Failed to add bike. Bike yard is full." << std::endl;
    }

    if (bikeYard.add_bike(b4)) {
        std::cout << "Bike added successfully!" << std::endl;
    } else {
        std::cout << "Failed to add bike. Bike yard is full." << std::endl;
    }

    std::cout << "Number of bikes in the bike yard: " << bikeYard.get_current_number_of_Bike() << std::endl;

    std::cout << "Number of bikes with code 5: " << bikeYard.has_code(5) << std::endl;

    return 0;
}