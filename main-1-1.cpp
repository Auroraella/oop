#include <iostream>
#include "AirVehicle.h"

int main() {
    AirVehicle av1;
    AirVehicle av2(500);

    std::cout << "AirVehicle 1 weight: " << av1.get_weight() << std::endl;
    std::cout << "AirVehicle 2 weight: " << av2.get_weight() << std::endl;

    std::cout << "AirVehicle 1 fuel: " << av1.get_fuel() << std::endl;
    std::cout << "AirVehicle 2 fuel: " << av2.get_fuel() << std::endl;

    av1.fly(0, 60);
    av2.fly(0, 60);

    std::cout << "AirVehicle 1 number of flights: " << av1.get_numberOfFlights() << std::endl;
    std::cout << "AirVehicle 2 number of flights: " << av2.get_numberOfFlights() << std::endl;

    return 0;
}