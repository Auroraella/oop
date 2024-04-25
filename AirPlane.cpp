#include "AirPlane.h"


AirPlane::AirPlane(int w, int p) : AirVehicle(w), numPassengers(p) {}




int AirPlane::get_numPassengers() const {
    return numPassengers;
}


void AirPlane::reducePassengers(int x) {
    if (numPassengers - x < 0){
        numPassengers = 0;
    } else {
        numPassengers -= x;
    }
}


void AirPlane::fly(int headwind, int minutes) {
    if (fuel < 20) {
        return;
    }


    float consumption = 0 ;
    if (headwind >= 60){
        consumption += 0.5 * minutes;
    } else {
        consumption += 0.25 * minutes;
    }
    consumption += 0.001*numPassengers*minutes;
    if (fuel - consumption < 20) {
        return;
    }
    fuel -= consumption;


    numberOfFlights++;
}


