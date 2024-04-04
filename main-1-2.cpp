#include <iostream>
#include "Parkinglot.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main() {
    ParkingLot lot(10);

    while (lot.getCount() < 10) {
        int choice;
        std::cout << "Enter the type of vehicle to park (1: Car, 2: Bus, 3: Motorbike): ";
        std::cin >> choice;

        if (choice == 1) {
            lot.parkVehicle(new Car(lot.getCount() + 1));
        } else if (choice == 2) {
            lot.parkVehicle(new Bus(lot.getCount() + 1));
        } else if (choice == 3) {
            lot.parkVehicle(new Motorbike(lot.getCount() + 1));
        } else {
            std::cout << "Invalid choice!" << std::endl;
        }
    }

    int choice;
    std::cout << "Enter the type of vehicle to park (1: Car, 2: Bus, 3: Motorbike): ";
    std::cin >> choice;

    if (choice == 1) {
        lot.parkVehicle(new Car(lot.getCount() + 1));
    } else if (choice == 2) {
        lot.parkVehicle(new Bus(lot.getCount() + 1));
    } else if (choice == 3) {
        lot.parkVehicle(new Motorbike(lot.getCount() + 1));
    } else {
        std::cout << "Invalid choice!" << std::endl;
    }
    
    int unparkID;
    std::cout << "Enter the ID of the vehicle to unpark: ";
    std::cin >> unparkID;
    lot.unparkVehicle(unparkID);

    return 0;
}
