#include <iostream>
// #include "function-4-1.cpp" // Include the file where your functions are defined

using namespace std;

extern int *readNumbers();
extern int secondSmallestSum(int *numbers,int length);

int main() {
    int *numbers = readNumbers();
    
    int result = secondSmallestSum(numbers, 10);
    
    std::cout << "Second Smallest Sum: " << result << std::endl;
    
    delete[] numbers;
    
    return 0;
}
