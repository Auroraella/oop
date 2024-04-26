#include "Helicopter.h"

Helicopter::Helicopter(int w, std::string n) : AirVehicle(w), name(n) {}
Helicopter::Helicopter() : Helicopter(0,"") {
}

std::string Helicopter::get_name() const {
    return this->name;
}

void Helicopter::set_name(std::string n) {
    this->name = n;
}

void Helicopter::fly(int headwind, int minutes) {
    float consumption = 0;
    if (headwind >= 40){
        consumption = 0.4*minutes;
    }else{
        consumption = 0.18*minutes;
    }
	int extra = 0;
    if (weight > 5670){
        extra = this->weight - 5670;
    }
    consumption += extra*0.01*minutes;
    if (fuel - consumption < 20){
        return;
    }

    fuel -= consumption;
    numberOfFlights++;
}
