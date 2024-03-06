#include <iostream>

using namespace std;

extern int is_identity(int array[10][10]);

int main() {
    int array[10][10];
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            std::cout << "Enter a number: ";
            std::cin >> array[i][j];
        }
    }

    int matrix = is_identity(array);
    if (matrix == 1) {
        std::cout << "Identity matrix" << std::endl;
    
    }else{
        std::cout << "Not identity matrix" << std::endl;
    }
    return 0;
}