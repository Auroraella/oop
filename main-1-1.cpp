#include <iostream>
using namespace std; 

extern int array_sum(int array[], int n);

int main() 
{
    int n;
    int array[1000];
    // Enter the number n
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> array[i];
    }
    std::cout << "The sum is " << array_sum(array, n) << std::endl;
    return 0;
}