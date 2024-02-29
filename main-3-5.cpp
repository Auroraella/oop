#include <iostream>
using namespace std;
extern double sum_even(double array[], int n);
int main() {
    double arr[1000];
    int n;

    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cout << "Enter a number: ";
        std::cin >> arr[i];
    }
    std::cout << sum_even(arr, n) << std::endl;
    return 0;

}