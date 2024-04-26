// Define and implement a class named Airplane. It is to be defined by inheriting from the AirVehicle class. The Airplane class has the following constructor and behaviour:

// Airplane();                       
// Airplane(int w, int p);           // Create Airplane with weight w and passengers p

// int numPassengers;               // number of passengers on the Airplane

// void reducePassengers(int x);     // reduce passenger list by x
// int get_numPassengers();
// void fly(int headwind, int minutes);          
// The function reducePassengers removes x passengers from the numPassengers attribute. There are no negative passengers on an air vehicle. If the amount of numPassengers is below 0, it should set the numPassengers attribute to 0. The get_numPassengers function returns the numPassengers attribute. The other methods should behave the same as for the parent class.

// There is no setter for numPassengers.

// Your Airplane class should define the fly() method, which was inherited from AirVehicle. When a plane flies, it will use 0.25% of its fuel for every minute it flies, unless there is a headwind of 60km/hour or more, and then it will use 0.5% of its fuel for each minute it flies. For every passenger, it will use 0.001% extra fuel each minute. E.g. if fuel is at 95%, and a plane with 100 passengers flies for 120 minutes into a 65km/hour headwind, the fuel will be 95% minus (0.5 * 120) minus (0.001 * 100 * 120) = 23%. After each flight, increment numberOfFlights by 1. If a flight would result in the Airplane finishing with less than 20% fuel it will not take off and fly and will not increment numberOfFlights.. 

// Save your code in Airplane.cpp and Airplane.h, so we can check that your code compiles. Implement a program with a main method that tests your code in a file called main-2-2.cpp.
#ifndef AIRPLANE_H
#define AIRPLANE_H

#include <string>

class AirVehicle: class Airplane{
protected:
    int numPassengers;
public:
    Airplane();
    Airplane(int w, int p);
    int Airplane set_numPassengers();
    void Airplane get_numPassengers();
    void fly(int headwind, int minutes);  
}