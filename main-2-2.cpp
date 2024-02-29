#include <iostream>
using namespace std;

extern int max_element(int array[], int n);
int main() {
    int num;
    int array[1000];
    std::cout << "Enter the number of elements: ";
    std::cin >> num;
    for (int i = 0; i < num; i++) {
        std::cout << "Enter a number: ";
        std::cin >> array[i];
    }
    std::cout << "The largest number is " << max_element(array, num) << std::endl;
    return 0;
    
}