#ifndef AIRVEHICLE_H
#define AIRVEHICLE_H

#include <string>

class AirVehicle {
protected: 
    int weight;          // the weight of AirVehicle
    float fuel;          // fuel percentage, initially 100%
    int numberOfFlights;
public:
    AirVehicle();
    AirVehicle(int w); // creates an AirVehicle with weight w
    int get_weight() const;
    float get_fuel() const;
    int get_numberOfFlights() const;
    void set_weight(int w);
    void set_fuel(float f);
    void set_numberOfFlights(int n);
    void refuel(); // Resets fuel back to 100%
    virtual void fly(int headwind, int minutes);
};

#endif