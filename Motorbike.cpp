#include "Motorbike.h"
#include <ctime>

Motorbike::Motorbike(int id) : Vehicle(id) {}

int Motorbike::getParkingDuration() {
    int currentTime = static_cast<int>(std::time(nullptr));
    int duration = currentTime - timeOfEntry;
    return static_cast<int>(duration * 0.85); // 15% reduction
}