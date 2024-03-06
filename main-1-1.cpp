#include <iostream> 

using namespace std;

extern int sum_diagonal(int array[4][4]);

int main() {
    int array[4][4];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            std::cout << "Enter a number: ";
            std::cin >> array[i][j];
        }
    }

    int diagonal_sum = sum_diagonal(array);
    std::cout << diagonal_sum << std::endl;
    return 0;
}