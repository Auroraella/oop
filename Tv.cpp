// Tv.cpp
#include "Tv.h"

Tv::Tv() : Appliance(), screenSize(0.0) {}

Tv::Tv(int powerRating, double screenSize) : Appliance(powerRating), screenSize(screenSize) {}

void Tv::setScreenSize(double screenSize) {
    this->screenSize = screenSize;
}

double Tv::getScreenSize() const {
    return screenSize;
}

double Tv::getPowerConsumption() const {
    return getPowerRating() * (screenSize / 10.0);
}
