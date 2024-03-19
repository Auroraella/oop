#include <iostream>
using namespace std;

extern void modifyArray(double* array, int size, double value);

int main() {
    double array[3] = {1.5, 2.5, 3.5};
    modifyArray(array, 3, 4.5);
    std::cout << "New array is: " << std::endl;
    for (int i = 0; i < 4; i++) {
        std::cout << array[i] << " ";

    }
    std::cout << std::endl;
    return 0;
}