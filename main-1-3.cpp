#include <iostream>
using namespace std;

extern void count_digits(int array[4][4]);

int main() {
    int array[4][4];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            std::cout << "Enter a number: ";
            std::cin >> array[i][j];
        }
    }
    count_digits(array);
    std::cout << std::endl;
}