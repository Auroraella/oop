#include <iostream>
#include "Bike_yard.h"

int main() {
    // Create an empty Bike_yard with a maximum capacity of 5
    Bike_yard bikeYard(5);

    // Create some Bike objects
    Bike b1("Mountain", 101);
    Bike b2("Road", 102);
    Bike b3("City", 103);
    Bike b4("BMX", 104);
    Bike b5("Hybrid", 105);
    Bike b6("Road", 106);

    // Add bikes to the bike yard
    if (bikeYard.add_bike(b1)) {
        std::cout << "Added bike 1 to the bike yard" << std::endl;
    } else {
        std::cout << "Could not add bike 1 to the bike yard" << std::endl;
    }
    if (bikeYard.add_bike(b2)) {
        std::cout << "Added bike 2 to the bike yard" << std::endl;
    } else {
        std::cout << "Could not add bike 2 to the bike yard" << std::endl;
    }
    if (bikeYard.add_bike(b3)) {
        std::cout << "Added bike 3 to the bike yard" << std::endl;
    } else {
        std::cout << "Could not add bike 3 to the bike yard" << std::endl;
    }
    if (bikeYard.add_bike(b4)) {
        std::cout << "Added bike 4 to the bike yard" << std::endl;
    } else {
        std::cout << "Could not add bike 4 to the bike yard" << std::endl;
    }
    if (bikeYard.add_bike(b5)) {
        std::cout << "Added bike 5 to the bike yard" << std::endl;
    } else {
        std::cout << "Could not add bike 5 to the bike yard" << std::endl;
    }
    if (!bikeYard.add_bike(b6)) {
        std::cout << "Failed to add bike 6 to the bike yard. Bike yard is full." << std::endl;
    }

    // Print the number of bikes in the bike yard
    std::cout << "The bike yard currently has " << bikeYard.get_current_number_of_Bike() << " bikes" << std::endl;

    // Check if the bike yard has a bike with a specific code
    int codeToCheck = 102;
    int count = bikeYard.has_code(codeToCheck);
    if (count > 0) {
        std::cout << "The bike yard has " << count << " bike(s) with code " << codeToCheck << std::endl;
    } else {
        std::cout << "The bike yard does not have a bike with code " << codeToCheck << std::endl;
    }

    // Get the list of bikes in the bike yard
    Bike* bikes = bikeYard.get_bikes();

    // Print the details of each bike
    for (int i = 0; i < bikeYard.get_current_number_of_Bike(); i++) {
        std::cout << "Bike " << i+1 << " has code " << bikes[i].get_code() << ", name: " << bikes[i].get_name() << ", code: " << bikes[i].get_code() << std::endl;
    }

    return 0;
}

