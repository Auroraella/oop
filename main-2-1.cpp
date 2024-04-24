// main-2-1.cpp
#include <iostream>
#include "Fridge.h"

int main() {
    // Create a fridge with a power rating of 150 and a volume of 200 litres
    Fridge myFridge(150, 200);

    // Turn on the fridge
    myFridge.turnOn();

    // Display the power consumption of the fridge
    std::cout << "Power Consumption of Fridge: " << myFridge.getPowerConsumption() << " watts" << std::endl;

    return 0;
}
