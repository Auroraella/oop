#include <iostream>
#include "AirVehicle.h"
#include "Airplane.h"


int main() {
    Airplane ap1(10000, 100);
    std::cout << "Airplane 1 weight: " << ap1.get_weight() << std::endl;
    std::cout << "Airplane 1 numPassengers: " << ap1.get_numPassengers() << std::endl;

    ap1.refuel();

    std::cout << "Airplane 1 fuel: " << ap1.get_fuel() << std::endl;

    ap1.fly(65, 120);

    std::cout << "Airplane 1 fuel: " << ap1.get_fuel() << std::endl;
    std::cout << "Airplane 1 number of flights: " << ap1.get_numberOfFlights() << std::endl;


    ap1.reducePassengers(20);


    std::cout << "Airplane 1 numPassengers: " << ap1.get_numPassengers() << std::endl;


    return 0;
}
