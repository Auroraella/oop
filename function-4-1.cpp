#include <iostream>
using namespace std;

int *readNumbers() {
    int *numbers = new int[10];
    for (int i = 0; i < 10; i++) {
        std::cin >> numbers[i];
    }
    return numbers;
}

int secondSmallestSum(int *numbers,int length) {
    if (length <= 1){
        return 0; // Assuming sum of empty array is 0
    }
           
    int smallestSum = numbers[0];
    int secondSmallestSum = numbers[0] + numbers[1];

    for (int i = 0; i < length; i++) {
        int currentSum = 0;
        for (int j = i; j < length; j++) {
            currentSum += numbers[j];
            if (currentSum < smallestSum) {
                secondSmallestSum = smallestSum;
                smallestSum = currentSum;
            } else if (currentSum < secondSmallestSum && currentSum != smallestSum) {
                secondSmallestSum = currentSum;
            }
        }
    }
    return secondSmallestSum;
}

