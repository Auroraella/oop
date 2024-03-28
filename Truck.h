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
    Truck(std::string b_name, int b_code);

    // Destructor
    //~Truck();
    
    // Getter methods
    std::string get_brand_name();
    int get_brand_code();

    // // Setter methods
    // void set_name(std::string name);
    // void set_code(int code);
};

#endif // TRUCK_H