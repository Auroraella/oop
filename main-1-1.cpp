#include <iostream>
using namespace std;

extern double arrayMin(double* array, int size);
int main() {
    double* array;
    int size;

    std::cout << "Enter the size of array: ";
    std::cin >> size;

    for (int i = 0; i < size; i++) {
        std::cout << "Enter a number: " << std::endl;
        std::cin >> array[i];
    }

    std::cout << "The minimum value is: " << arrayMin(array, size) << std::endl;

    return 0;
}