#ifndef BIKE_H
#define BIKE_H

#include <string>

class Bike {
private:
    std::string name;
    int code;

public:
    // Constructors
    Bike();
    Bike(std::string name, int code);
    
    // Getter methods
    std::string get_name();
    int get_code();

    // // Setter methods
    // void set_name(std::string name);
    // void set_code(int code);
};

#endif // BIKE_H