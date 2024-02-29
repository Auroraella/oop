#include <iostream>

using namespace std;

extern int count_evens(int number);
int main() {
    int number, num;
    // Enter the number of array
    std::cout << "Enter the number of elements in an array: ";
    std::cin >> number;

    for (int i = 0; i < number; i++) {
        std::cout << "Enter a number: ";
        std::cin >> num;
    }
    std::cout << "The number of even numbers is " << count_evens(num) << std::endl;
    return 0;
}