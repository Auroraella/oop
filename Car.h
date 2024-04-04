#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
public:
    Car();
    Car(int id);
    int getParkingDuration() override;
};

#endif // CAR_H