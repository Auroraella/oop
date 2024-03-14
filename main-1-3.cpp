#include <iostream>

using namespace std;

extern double* copyArrayToDynamic(double arr[], int size);

int main() {
    int size;

    std::cout << "Enter the size of the array: ";
    std::cin >> size;
    double array[size];
    for (int i = 0; i < size; i++) {
        std::cout << "Enter a number for the array: ";
        std::cin >> array[i];
    }
    double* newArr = new double [size];
    newArr = copyArrayToDynamic(array, size);
    for (int i = 0; i < size; i++) {
        std::cout << "New array is: " << newArr[i] << std::endl;
    }
    delete[] newArr;
    return 0;
}