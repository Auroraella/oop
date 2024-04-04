#ifndef MOTORBIKE_H
#define MOTORBIKE_H

#include "Vehicle.h"

class Motorbike : public Vehicle {
public:
    Motorbike();
    Motorbike(int id);
    int getParkingDuration() override;
};

#endif // MOTORBIKE_H