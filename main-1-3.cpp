#include <iostream>
using namespace std;

extern int num_count(int array[], int n, int number);
int main() {
    int n, number;
    int array[1000];
    // Enter the number n
    std::cout << "Enter the size parameters: ";
    std::cin >> n;
    std::cout << "Enter the number: ";
    std::cin >> number;
    
    for (int i = 0; i < n; i++) {
        std::cout << "Enter a number: ";
        std::cin >> array[i];
    }
    std::cout << num_count(array, n, number) << std::endl;
    
}