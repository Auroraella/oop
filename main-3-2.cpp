#include <iostream>
using namespace std;
//#include "function-3-2.cpp" // Include the file where your functions are defined
extern int *readNumbers();
extern void printNumbers(int *numbers, int length);
extern void hexDigits(int *numbers, int length);
extern bool equalsArray(int *numbers1, int *numbers2, int length);
extern int *reverseArray(int *numbers1, int length);

int main() {
    int *numbers1 = readNumbers();
    
    int *reversedNumbers = reverseArray(numbers1, 10);
    
    bool result = equalsArray(numbers1, reversedNumbers, 10);
    
    std::cout << std::boolalpha << result << std::endl;
    
    delete[] numbers1;
    delete[] reversedNumbers;
    
    return 0;
}
