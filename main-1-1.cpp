// #include <iostream>
// #include "Musician.h"

// int main() {
//     Musician m1;
//     std::cout << "Default instrument: " << m1.get_instrument() << ", Default experience: " << m1.get_experience() << std::endl;

//     Musician m2("guitar", 5);
//     std::cout << "Instrument: " << m2.get_instrument() << ", Experience: " << m2.get_experience() << std::endl;

//     return 0;
// }

#include <iostream>
#include "Musician.h"
#include <iostream>
#include "Musician.h"

int main() {
    // Creating Musician objects using both constructors
    Musician m1; // Default constructor
    Musician m2("guitar", 5); // Parameterized constructor
    
    // Displaying information for m1 (default constructor)
    std::cout << "Default instrument: " << m1.get_instrument() << ", Default experience: " << m1.get_experience() << std::endl;

    // Displaying information for m2 (parameterized constructor)
    std::cout << "Instrument: " << m2.get_instrument() << ", Experience: " << m2.get_experience() << std::endl;

    // Testing setter methods
    m1.set_instrument("piano");
    m1.set_experience(3);

    std::cout << "\nUpdated information for m1:\n";
    std::cout << "Instrument: " << m1.get_instrument() << ", Experience: " << m1.get_experience() << std::endl;

    return 0;
}
