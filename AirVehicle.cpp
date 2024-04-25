#include "AirVehicle.h"


AirVehicle::AirVehicle() : AirVehicle(0){}


AirVehicle::AirVehicle(int w) : weight(w), fuel(100), numberOfFlights(0) {
	
}


int AirVehicle::get_weight() const {
    return this->weight;
}


float AirVehicle::get_fuel() const {
    return this->fuel;
}


int AirVehicle::get_numberOfFlights() const {
    return this->numberOfFlights;
}


void AirVehicle::set_weight(int w) {
    this->weight = w;
}


void AirVehicle::set_fuel(float f) {
    this->fuel = f;
}


void AirVehicle::set_numberOfFlights(int n) {
    this->numberOfFlights = n;
}




void AirVehicle::refuel() {
    this->fuel = 100;
}


void AirVehicle::fly(int headwind, int minutes) {
    this->numberOfFlights++;
}


