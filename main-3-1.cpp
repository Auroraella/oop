#include <iostream>
#include "AirFleet.h"

int main()
{
    AirFleet fleet;
    AirVehicle **vehicles = fleet.get_fleet();


    for (int i = 0; i < 5; i++){
        std::cout << "Vehicle " << i + 1 << " weight: " << vehicles[i]->get_weight() << std::endl;
    }


    return 0;
}
