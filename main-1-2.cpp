#include <iostream>
using namespace std;

extern double array_mean(int array[], int n);
int main() {
    int n;
    int array[1000];
    // Enter the number n
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    for(int i = 0; i < n; i++) {
        std::cout << "Enter a number: ";
        std::cin >> array[i];
    }
    std::cout << "The average is " << array_mean(array, n) << std::endl;
    return 0;
}