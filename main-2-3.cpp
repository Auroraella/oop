#include <iostream>

using namespace std;

extern void two_five_nine(int array[], int n);

int main() {
    int main() {
    int num;
    int array[1000];
    std::cout << "Enter the number of elements: ";
    std::cin >> num;
    for (int i = 0; i < num; i++) {
        std::cout << "Enter a number: ";
        std::cin >> array[i];
    }
    std::cout << "2:" << num_twos << ";5:" << num_fives << ";9:" << num_nines << ";\n";
    //std::cout << two_five_nine(array, num) << std::endl;
    return 0;
    
}
}