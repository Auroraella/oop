#include <iostream>

int main() {

    int x = 100;
    int y = 100;
    int z = 100;

    int *p = &x;
    int *q = &y;
    int *w = &z;

    std :: cout << p-q << std :: endl;

    return 0;

}