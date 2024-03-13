#include <iostream>
using namespace std;

// Part 2
Function to change the value pointed to by the double pointer to 42
void changeValue(double* ptr) {
    *ptr = 42.0;
}

// // Part 3
void printArray(double*arr, int size){
    std::cout << "Array content: " << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

// // Part 4
double arrayMax(double*arr, int size) {
    int maxValue = arr[0];
    for (int i = 0; i < size; i++) {
        if (arr[i] > maxValue) {
            maxValue = arr[i];
        }
    }
    return maxValue;
}

// Part 7
// Function to create a dynamic array of doubles initialized with value M
double* dynamicArray(int size, double M) {
    double* arr = new double[size];
    for (int i = 0; i < size; ++i) {
        arr[i] = M;
    }
    return arr;
}

// Function to find the maximum value in an array
double arrayMax(double* arr, int size) {
    double max = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

