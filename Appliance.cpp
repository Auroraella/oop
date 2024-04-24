// Appliance.cpp
#include "Appliance.h"

Appliance::Appliance() : powerRating(0), isOn(false) {}

Appliance::Appliance(int powerRating) : powerRating(powerRating), isOn(false) {}

Appliance::~Appliance() {} // Virtual destructor definition

int Appliance::getPowerRating() const {
    return powerRating;
}

void Appliance::setPowerRating(int powerRating) {
    this->powerRating = powerRating;
}

bool Appliance::getIsOn() const {
    return isOn;
}

void Appliance::setIsOn(bool isOn) {
    this->isOn = isOn;
}

double Appliance::calculateEnergyConsumption() const {
    return 0.0;
}
