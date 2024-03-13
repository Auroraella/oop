#include <iostream>
#include "workshop.h"

using namespace std;

//Part 1
int main() {
    double Double = 9.9;
    char Char = 'A';

    // Declare pointers for double and char and assign their addresses
    double *doublePtr = &Double;
    char *charPtr = &Char;

    // Print out the values using pointers
    std::cout << *doublePtr << std::endl;
    std::cout <<  *charPtr << std::endl;

    return 0;
}

// Part 2
int main() {
    double Double = 3.14;
    double *doublePtr = &Double;

    std::cout << *doublePtr << std::endl;
    changeValue(doublePtr);
    

    return 0;
}

// // Part 3
int main() {
    // Create a double array
    double myArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};

    // Calculate the size of the array
    int size = sizeof(myArray) / sizeof(myArray[0]);

    // Print out the original content of the array
    std::cout << "Original content of the array: " << std::endl;
    printArray(myArray, size);

    return 0;
}

// Part 4
int main() {
    int size;
    double arr[1000];
    std::cout << "Enter the number of elements: ";
    std::cin >> size;
    for (int i = 0; i < size; i++) {
        std::cout << "Enter a number: ";
        std::cin >> arr[i];
    }
    std::cout << "The largest number is " << arrayMax(arr, size) << std::endl;
    return 0;
    
}

// Part 7
int main() {
    // Define size of the dynamic array
    int size = 5;
    
    // Define the value with which to initialize the array elements
    double M = 10.0;

    // Create a dynamic array initialized with value M
    double* myDynamicArray = dynamicArray(size, M);

    // Find the maximum value in the array
    double maxVal = arrayMax(myDynamicArray, size);

    // Print out the maximum value
    std::cout << "Maximum value in the array: " << maxVal << std::endl;

    // Deallocate the dynamic array
    delete[] myDynamicArray;

    return 0;
}
