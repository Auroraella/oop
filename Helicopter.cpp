#include "Helicopter.h"

Helicopter::Helicopter(int w, std::string n) : AirVehicle(w), name(n) {}

std::string Helicopter::get_name() const {
    return name;
}

void Helicopter::set_name(std::string n) {
    name = n;
}

void Helicopter::fly(int headwind, int minutes) {
    if (fuel < 20){
        return;
    }

    float consumption = 0;
    if (headwind >= 40){
        consumption += 0.4*minutes;
    }else{
        consumption = 0.18*minutes;
    }
    if (weight > 5670){
        consumption += 0.01 * (weight - 5670) * minutes;
    }

    fuel -= consumption;
    numberOfFlights++; 
}