#ifndef AIRFLEET_H
#define AIRFLEET_H

#include "AirVehicle.h"
#include "AirPlane.h"
#include "Helicopter.h"


class AirFleet {
private:
    AirVehicle** fleet;
	
public:
    AirFleet();
    AirVehicle**get_fleet() const;
};


#endif
