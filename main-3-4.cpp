#include <iostream>

using namespace std;

extern void print_pass_fail(char grade);
int main() {
    char score;
    std::cout << "Enter a grade: ";
    std::cin >> score;

    print_pass_fail(score);
    return 0;
}