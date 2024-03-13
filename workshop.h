#include <iostream>
using namespace std;

// Function to change the value pointed to by the double pointer to 42
void changeValue(double* ptr) {
    *ptr = 42.0;
}