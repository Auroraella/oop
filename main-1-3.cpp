#include <iostream>
#include "Parkinglot.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main() {
    ParkingLot lot(10);

    // Park 5 Car objects
    for (int i = 0; i < 5; ++i) {
        lot.parkVehicle(new Car(i + 1));
    }

    // Park 3 Bus objects
    for (int i = 0; i < 3; ++i) {
        lot.parkVehicle(new Bus(i + 6));
    }

    // Park 2 Motorbike objects
    for (int i = 0; i < 2; ++i) {
        lot.parkVehicle(new Motorbike(i + 9));
    }

    int overstayingCount = lot.countOverstayingVehicles(15);
    std::cout << "Number of vehicles overstaying in the parking lot: " << overstayingCount << std::endl;

    return 0;
}
