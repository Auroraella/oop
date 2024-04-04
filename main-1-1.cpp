#include <iostream>
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include <vector>
#include <unistd.h>

int main() {
    int numCars, numBuses, numMotorbikes;
    std::cout << "Enter the number of cars: ";
    std::cin >> numCars;
    std::cout << "Enter the number of buses: ";
    std::cin >> numBuses;
    std::cout << "Enter the number of motorbikes: ";
    std::cin >> numMotorbikes;

    std::vector<Vehicle*> vehicles;

    for (int i = 0; i < numCars; ++i) {
        vehicles.push_back(new Car(i + 1));
    }

    for (int i = 0; i < numBuses; ++i) {
        vehicles.push_back(new Bus(numCars + i + 1));
    }

    for (int i = 0; i < numMotorbikes; ++i) {
        vehicles.push_back(new Motorbike(numCars + numBuses + i + 1));
    }

    for (const auto& vehicle : vehicles) {
        sleep(5);
        std::cout << "Vehicle ID: " << vehicle->getID() << " Parking Duration: " << vehicle->getParkingDuration() << " seconds" << std::endl;
        

    }

    // Clean up allocated memory
    for (auto& vehicle : vehicles) {
        delete vehicle;
    }

    return 0;
}