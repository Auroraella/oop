#include <iostream>
using namespace std;
extern double weighted_average(int array[], int n);
int main() {
    int arr[1000];
    int n;

    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cout << "Enter a number: ";
        std::cin >> arr[i];
    }
    std::cout << weighted_average(arr, n) << std::endl;
    return 0;
}