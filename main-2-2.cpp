#include <iostream>
#include <string>
// using namespace std;

extern int binary_to_int(int binary_digits[], int number_of_digits);
int main() {
    int binary_digits;
    int number_of_digits;
    std::cout << "Enter the size of number: ";
    std::cin >> number_of_digits;
    for (int i = 0; i < number_of_digits; i++) {
        std::cout << "Enter a number: ";
        std::cin >> binary_digits;
    }

    int result = binary_to_int(binary_digits, number_of_digits);
    std::cout << result << std::endl;

  return 0;
}