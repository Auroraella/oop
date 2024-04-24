// Appliance.cpp
#include "Appliance.h"

Appliance::Appliance() : powerRating(0), isOn(false) {}

Appliance::Appliance(int powerRating) : powerRating(powerRating), isOn(false) {}

void Appliance::setPowerRating(int powerRating) {
    this->powerRating = powerRating;
}

int Appliance::getPowerRating() const {
    return powerRating;
}

void Appliance::turnOn() {
    isOn = true;
}

void Appliance::turnOff() {
    isOn = false;
}

bool Appliance::isPoweredOn() const {
    return isOn;
}

double Appliance::getPowerConsumption() const {
    return 0.0; // Default implementation for base class
}
