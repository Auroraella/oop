#include <iostream>
using namespace std;

extern void modifyArray(double* array, int size, double value);
int main() {
    double* newArray = new double[3];
    newArray[0] = 1.5;
    newArray[1] = 2.5;
    newArray[2] = 3.5;

    int size = 3;

    double newValue = 4.5;
    
    modifyArray(newArray, size, newValue);

    std::cout << "The new array is: ";
    for (int i = 0; i < size; i++) {
        std::cout << newArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}