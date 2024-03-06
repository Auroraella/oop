#include <iostream>
using namespace std;

extern void print_scaled(int array[3][3], int scale);
int main() {
    int scale;
    std::cout << "Enter a number for scale: ";
    std::cin >> scale;
    int threebythree[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << "Enter a number: ";
            std::cin >> threebythree[i][j];
        }
    }
    print_scaled(threebythree, scale);
    return 0;


}