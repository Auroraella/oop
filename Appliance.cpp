// Appliance.cpp
#include "Appliance.h"

Appliance::Appliance() : powerRating(0), isOn(false) {}

Appliance::Appliance(int powerRating) : powerRating(powerRating), isOn(false) {}

void Appliance::turnOn() {
    isOn = true;
}

void Appliance::turnOff() {
    isOn = false;
}

double Appliance::getPowerConsumption() const {
    if (isOn)
        return calculateEnergyConsumption();
    else
        return 0.0;
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
