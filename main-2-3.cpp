#include <iostream>

using namespace std;

extern void two_five_nine(int array[], int n);

int main() {
    int num;
    int array[1000];
    std::cout << "Enter the number of elements: ";
    std::cin >> num;
    for (int i = 0; i < num; i++) {
        std::cout << "Enter a number: ";
        std::cin >> array[i];
    }    
    two_five_nine(array, num);
    return 0;
}
