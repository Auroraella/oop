#include "Car.h"
#include <ctime>
#include <chrono>

Car::Car(int id) : Vehicle(id) {}

int Car::getParkingDuration() {
    int currentTime = static_cast<int>(std::time(nullptr));
    int duration = currentTime - timeOfEntry;
    return static_cast<int>(duration * 0.9); // 10% reduction
}


