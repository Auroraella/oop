#include <iostream>

using namespace std;

extern int count_evens(int number);
int main() {
    int number;
    // Enter the number of array
    std::cout << "Enter the number: ";
    std::cin >> number;

    
    std::cout << "The number of even numbers is " << count_evens(number) << std::endl;
    return 0;
}
