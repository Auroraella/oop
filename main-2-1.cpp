#include <iostream>
#include "Tv.h"

int main() {
    // Create a TV with a power rating of 200 and a screen size of 40 inches
    Tv myTv(200, 40);

    // Set a new screen size for the TV
    myTv.setScreenSize(50);

    // Display the screen size and power consumption of the TV
    std::cout << "Screen Size of TV: " << myTv.getScreenSize() << " inches" << std::endl;
    std::cout << "Power Consumption of TV: " << myTv.getPowerConsumption() << " watts" << std::endl;

    return 0;
}
