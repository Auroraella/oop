#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle {
protected:
    int timeOfEntry;
    int ID;

public:
    Vehicle(int id);
    int getID() const;
    virtual int getParkingDuration() = 0;
    virtual ~Vehicle() {}
};

#endif