// Question 2 - Inheritance and Polymorphism
// 2-1. (15 marks) Define and implement a class named Helicopter, which represents a special kind of air vehicle. It is to be defined by inheriting from the AirVehicle class. The Helicopter class has the following constructor:

// Helicopter(int w, string n)     // creates a Helicopter with weight w and name n

// string name;                    // name of the Helicopter
// void fly(int headwind, int minutes);
// Helicopter has a default constructor that does nothing.

// Following the principles of encapsulation and information hiding, set the proper access modifiers for the attributes and provide methods to access the object’s data. The get and set function names should be the attribute name prefixed with "get_" or "set_" respectively.

// Your Helicopter class should define the fly() method, which was inherited from AirVehicle. When a helicopter flies, it will use 0.18% of its fuel for every minute it flies, unless there is a headwind of 40km/hour or more, and then it will use 0.4% of its fuel for each minute it flies. For every kilogram over 5670kg, it will use 0.01% extra fuel each minute.

// E.g. if fuel is at 80%, and a 5690kg helicopter flies for 10 minutes into a 45km/hour headwind, the fuel will be 80% minus (0.4 * 10 minutes) minus (0.01 * 20kg * 10 minutes) = 74%.

// After each flight, increment numberOfFlights by 1.

// If a flight would result in the Helicopter finishing with less than 20% fuel it will not take off and fly, wont use fuel, and will not increment numberOfFlights. 

// Save your code in Helicopter.cpp and Helicopter.h, so we can check that your code compiles. Implement a program with a main method that tests your code in a file called main-2-1.cpp.

#ifndef HELICOPTER_H
#define HELICOPTER_H

#include <string>

class AirVehicle: class Helicopter{
private:
    string name;
public:
    Helicopter();
    Helicopter(int w, string n);     // creates a Helicopter with weight w and name n
    int Helicopter get_name();
    void Helicopter set_name();
    void fly(int headwind, int minutes);

}