#include <iostream>
using namespace std;

// Hàm thêm giá trị vào mảng động
void arrayAdd(double*& arr, int& size, double value) {
    // Tăng kích thước của mảng động
    int newSize = size + 1;
    
    // Tạo mảng động mới với kích thước mới
    double* newArray = new double[newSize];
    
    // Sao chép giá trị từ mảng cũ sang mảng mới
    for (int i = 0; i < size; ++i) {
        newArray[i] = arr[i];
    }
    
    // Thêm giá trị mới vào cuối mảng mới
    newArray[size] = value;

    // Giải phóng bộ nhớ của mảng cũ
    delete[] arr;

    // Gán con trỏ của mảng mới cho con trỏ của mảng cũ
    arr = newArray;

    // Cập nhật kích thước
    size = newSize;
}

