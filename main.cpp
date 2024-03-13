#include <iostream>
#include "workshop.h"

using namespace std;

// Part 1
int main() {
    double Double = 9.9;
    char Char = 'A';

    // Declare pointers for double and char and assign their addresses
    double *doublePtr = &Double;
    char *charPtr = &Char;

    // Print out the values using pointers
    std::cout << *doublePtr << std::endl;
    std::cout <<  *charPtr << std::endl;

    return 0;
}

