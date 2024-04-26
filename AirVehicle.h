// Define and implement a class named AirVehicle that has the following constructor and attributes:

// AirVehicle();
// AirVehicle(int w);  // creates an AirVehicle with weight w

// int weight;        // the weight of AirVehicle 
// float fuel;        // fuel percentage, initially 100%
// int numberOfFlights; // initially 0

// void refuel();      // Resets fuel back to 100%
// void fly(int headwind, int minutes); // headwind in km/h and minutes (time flying)
// In your AirVehicle class, include a default constructor, without parameters, which does nothing.

// Define the fly method as a virtual function. Every time the method is called, increase the numberOfFlights by 1.

// Define the refuel() method so that when it's called, fuel is reset to 100.

// Following the principles of encapsulation and information hiding, set the proper access modifiers for the attributes and provide methods to access the object’s data. You need to set the weight, fuel, and number of flights, as well as get the attributes values. The get and set function names should be the attribute name prefixed with "get_" or "set_" respectively

// Save your code in AirVehicle.cpp and AirVehicle.h, so we can check that your code compiles. Implement a program with a main method that tests your code in a file called main-1-1.cpp.

 
#ifndef AIRVEHICLE_H
#define AIRVEHICLE_H

#include <string>

class AirVehicle {
protected:
    int weight;
    float fuel;
    int numberOfFLights;
public:
    AirVehicle();
    AirVehicle(int w);  // creates an AirVehicle with weight w
    int AirVehicle get_weight();
    float AirVehicle get_fuel();
    int AirVehicle get_numberOfFLights();
    void AirVehicle set_weight();
    void AirVehicle set_fuel();
    void AirVehicle set_numberOfFlights();
    void refuel();      // Resets fuel back to 100%
    virtual void fly(int headwind, int minutes); // headwind in km/h and minutes (time flying)
};

#endif