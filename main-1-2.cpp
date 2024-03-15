#include <iostream>
using namespace std;

extern void modifyArray(double* array, int size, double value);

int main() {
    double* dynamicArray = new double[3];
    dynamicArray[0] = 1.5;
    dynamicArray[1] = 2.5;
    dynamicArray[2] = 3.5;
    int size = 3;

    double newValue = 4.5;

    modifyArray(dynamicArray, size, newValue);

    std::cout << "The new array is: " ;
    for (int i = 0; i < size; i++) {
        std::cout << dynamicArray[i] << " ";
    }
    std::cout << std::endl;

    //delete[] dynamicArray;

    return 0;
}