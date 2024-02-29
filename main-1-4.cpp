#include <iostream>
using namespace std;
extern int sum_two_arrays(int array[], int secondarray[], int n);
int main() {
    int n;
    int array[1000];
    int secondarray[1000];
    // Enter the size of the array
    std::cout << "Enter a number: ";
    std::cin >> n;
    // for loop
    for (int i = 0; i < n; i++) {
        std::cout << "Enter a number for the first array: ";
        std::cin >> array[i];

        std::cout << "Enter a number for the second array: ";
        std::cin >> secondarray[i];

    }
    std::cout << "The sum is " << sum_two_arrays(array, secondarray, n) << std::endl;
    return 0;
}