#include <iostream>
#include "Truck.h"
#include "Truck_yard.h"

int main() {

    Truck_yard truckYard(3);

    Truck t1(5, "T1"); 
    Truck t2(5, "T2"); 
    Truck t3(6, "T3"); 
    Truck t4(10, "T4"); 
    
    if (truckYard.addStock(t1)) {
        std::cout << "Truck added successfully!" << std::endl;
    } else {
        std::cout << "Failed to add truck. Truck yard is full." << std::endl;
    }

    if (truckYard.addStock(t2)) {
        std::cout << "Truck added successfully!" << std::endl;
    } else {
        std::cout << "Failed to add truck. Truck yard is full." << std::endl;
    }

    if (truckYard.addStock(t3)) {
        std::cout << "Truck added successfully!" << std::endl;
    } else {
        std::cout << "Failed to add truck. Truck yard is full." << std::endl;
    }

    if (truckYard.addStock(t4)) {
        std::cout << "Truck added successfully!" << std::endl;
    } else {
        std::cout << "Failed to add truck. Truck yard is full." << std::endl;
    }

    std::cout << "Number of trucks in the truck yard: " <<truckYard.get_total_stock_count() << std::endl;

    std::cout << "Number of trucks with code 5: " << truckYard.get_stock_count(5) << std::endl;

    return 0;
}