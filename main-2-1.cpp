#include <iostream>
#include "AirVehicle.h"
#include "Helicopter.h"


int main() {
    AirVehicle av1;
    Helicopter h1(5000, "A");


    std::cout << "AirVehicle 1 weight: " << av1.get_weight() << std::endl;
    std::cout << "Helicopter 1 weight: " << h1.get_weight() << std::endl;
    std::cout << "Helicopter 1 name: " << h1.get_name() << std::endl;


    av1.refuel();
    h1.refuel();


    std::cout << "AirVehicle 1 fuel: " << av1.get_fuel() << std::endl;
    std::cout << "Helicopter 1 fuel: " << h1.get_fuel() << std::endl;


    av1.fly(0, 60);
    h1.fly(45, 10);


    std::cout << "AirVehicle 1 fuel: " << av1.get_fuel() << std::endl;
    std::cout << "Helicopter 1 fuel: " << h1.get_fuel() << std::endl;
    std::cout << "AirVehicle 1 number of flights: " << av1.get_numberOfFlights() << std::endl;
    std::cout << "Helicopter 1 number of flights: " << h1.get_numberOfFlights() << std::endl;


    return 0;
}
