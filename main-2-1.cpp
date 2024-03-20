#include <iostream>

using namespace std;

extern int *readNumbers();
extern void hexDigits(int *numbers,int length);
extern void printNumbers(int *numbers, int length);

int main() {
    int* numbers = readNumbers();
    printNumbers(numbers, 10);
    hexDigits(numbers, 10);
    delete[] numbers;
    return 0;
}