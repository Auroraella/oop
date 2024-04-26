#ifndef AIRPLANE_H
#define AIRPLANE_H

#include "AirVehicle.h"

class AirPlane : public AirVehicle {
private:
    int numPassengers;
public:
    AirPlane(int w, int p);
    int get_numPassengers() const;
    void reducePassengers(int x);
    void fly(int headwind, int minutes) override;
};

#endif
