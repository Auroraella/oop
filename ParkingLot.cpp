#include "ParkingLot.h"
#include <iostream>
#include <ctime>

ParkingLot::ParkingLot(int capacity) : maxCapacity(capacity), count(0) {
    vehicles = new Vehicle*[maxCapacity];
}

ParkingLot::~ParkingLot() {
    for (int i = 0; i < count; ++i) {
        delete vehicles[i];
    }
    delete[] vehicles;
}

int ParkingLot::getCount() const {
    return count;
}

void ParkingLot::parkVehicle(Vehicle* vehicle) {
    if (count < maxCapacity) {
        vehicles[count++] = vehicle;
    } else {
        std::cout << "The lot is full" << std::endl;
    }
}

void ParkingLot::unparkVehicle(int id) {
    bool found = false;
    for (int i = 0; i < count; ++i) {
        if (vehicles[i]->getID() == id) {
            delete vehicles[i];
            vehicles[i] = vehicles[count - 1];
            --count;
            found = true;
            break;
        }
    }
    if (!found) {
        std::cout << "Vehicle not in the lot" << std::endl;
    }
}

int ParkingLot::countOverstayingVehicles(int maxParkingDuration) const {
    int overstayingCount = 0;
    std::time_t currentTime = std::time(nullptr);
    for (int i = 0; i < count; ++i) {
        if ((currentTime - vehicles[i]->getTimeOfEntry()) > maxParkingDuration) {
            ++overstayingCount;
        }
    }
    return overstayingCount;
}