#include <iostream>
using namespace std;

extern double* duplicateArray(double* array, int size);
int main() {
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    double array[size];

    for (int i = 0; i < size; i++) {
        std::cout << "Enter a number: " << std::endl;
        std::cin >> array[i];
    }

    double* newArr = new double [size];
    newArr = duplicateArray(array, size);
    for (int i = 0; i < size; i++) {
        std::cout << "New array is: " << newArr[i] << std::endl;
    }
    delete[] newArr;
    return 0;
    std::cout << newArr << std::endl;
    
    return 0;
}