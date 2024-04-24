// main-1-1.cpp
#include <iostream>
#include "Appliance.h"

int main() {
    // Create an appliance with a power rating of 100
    Appliance fridge(100);

    // Display the initial power consumption (should be 0 since it's off)
    std::cout << "Initial Power Consumption: " << fridge.getPowerConsumption() << std::endl;

    // Turn on the appliance
    fridge.turnOn();

    // Display the power consumption after turning it on
    std::cout << "Power Consumption After Turning On: " << fridge.getPowerConsumption() << std::endl;

    // Turn off the appliance
    fridge.turnOff();

    // Display the power consumption after turning it off
    std::cout << "Power Consumption After Turning Off: " << fridge.getPowerConsumption() << std::endl;

    return 0;
}
