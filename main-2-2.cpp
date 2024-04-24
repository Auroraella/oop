// main-2-2.cpp
#include <iostream>
#include "Tv.h"

int main() {
    // Create a TV with a power rating of 200 and a screen size of 40 inches
    Tv myTv(200, 40);

    // Display the power consumption of the TV
    std::cout << "Power Consumption of TV: " << myTv.getPowerConsumption() << " watts" << std::endl;

    return 0;
}
