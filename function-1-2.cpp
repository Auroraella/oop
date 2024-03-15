#include <iostream>
using namespace std;


void modifyArray(double* array, int size, double value) {
    int newSize = size + 1;
    double* newArray = new double[newSize];
    for (int i = 0; i < size; ++i) {
        newArray[i] = array[i];
    }
    newArray[size] = value;
    //delete[] arr;
    array = newArray;
    size = newSize;
}

