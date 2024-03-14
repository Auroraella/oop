#include <iostream>

using namespace std;

extern double* copyArrayToDynamic(double arr[], int size);

int main() {
    double array;
    int size;

    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    double newArr = size;

    std::cout << copyArrayToDynamic(array, size) << std::endl;

    return 0;
}