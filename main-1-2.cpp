#include <iostream>
using namespace std;

extern void arrayAdd(double*& arr, int& size, double value);

int main() {
    // Mảng động ban đầu
    double* dynamicArray = new double[3];
    dynamicArray[0] = 1.5;
    dynamicArray[1] = 2.5;
    dynamicArray[2] = 3.5;

    // Kích thước của mảng động ban đầu
    int size = 3;

    // Giá trị mới cần thêm vào mảng
    double newValue = 4.5;

    // Gọi hàm để thêm giá trị vào mảng động
    arrayAdd(dynamicArray, size, newValue);

    // Hiển thị mảng sau khi thêm giá trị
    std::cout << "Mang sau khi them gia tri: ";
    for (int i = 0; i < size; ++i) {
        std::cout << dynamicArray[i] << " ";
    }

    // Đừng quên giải phóng bộ nhớ của mảng động khi không cần thiết nữa
    delete[] dynamicArray;

    return 0;
}