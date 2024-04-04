#include "Bus.h"
#include <ctime>

Bus::Bus(int id) : Vehicle(id) {}

int Bus::getParkingDuration() {
    int currentTime = static_cast<int>(std::time(nullptr));
    int duration = currentTime - timeOfEntry;
    return static_cast<int>(duration * 0.75); // 25% reduction
}
