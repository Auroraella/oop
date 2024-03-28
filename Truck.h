#ifndef TRUCK_H
#define TRUCK_H

#include <string>

class Truck {
private:
    std::string b_name;
    int b_code;

public:
    // Constructors
    Truck();
    Truck(int b_code, std::string b_name);

    // Destructor
    //~Truck();
    
    // Getter methods
    std::string get_brand_name();
    int get_brand_code();

};

#endif // TRUCK_H