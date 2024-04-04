#include "Vehicle.h"
#include <ctime>

Vehicle::Vehicle(int id) : ID(id) {
    timeOfEntry = static_cast<int>(std::time(nullptr));
}

int Vehicle::getID() const {
    return ID;
}

std::time_t Vehicle::getTimeOfEntry() const {
    return timeOfEntry;
}