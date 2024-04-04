#ifndef VEHICLE_H
#define VEHICLE_H

#include <ctime>
class Vehicle {
protected:
    int timeOfEntry;
    int ID;

public:
    Vehicle(int id);
    int getID() const;
    std::time_t getTimeOfEntry() const;
    virtual int getParkingDuration() = 0;
    virtual ~Vehicle() {}
};

#endif