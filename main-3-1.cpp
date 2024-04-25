#include <iostream>
#include "AirFleet.h"

int main() {
    AirFleet fleet;

    for (int i = 0; i < 5; i++) {
        if (dynamic_cast<AirPlane*>(fleet.get_fleet()[i])) {
            std::cout << "AirPlane " << i << " weight: " << dynamic_cast<AirPlane*>(fleet.get_fleet()[i])->get_weight() << std::endl;
            std::cout << "AirPlane " << i << " numPassengers: " << dynamic_cast<AirPlane*>(fleet.get_fleet()[i])->get_numPassengers() << std::endl;
        } else if (dynamic_cast<Helicopter*>(fleet.get_fleet()[i])) {
            std::cout << "Helicopter " << i << " weight: " << dynamic_cast<Helicopter*>(fleet.get_fleet()[i])->get_weight() << std::endl;
            std::cout << "Helicopter " << i << " name: " << dynamic_cast<Helicopter*>(fleet.get_fleet()[i])->get_name() << std::endl;
        } else {
            std::cout << "AirVehicle " << i << " weight: " << fleet.get_fleet()[i]->get_weight() << std::endl;
        }
    }

    return 0;
}