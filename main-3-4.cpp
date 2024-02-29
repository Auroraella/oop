#include <iostream>

using namespace std;

extern void print_pas_fail(char grade);
int main() {
    char score;
    std::cout << "Enter a grade: ";
    std::cin >> score;

    std::cout << print_pas_fail(score) << std::endl;
    return 0;
}