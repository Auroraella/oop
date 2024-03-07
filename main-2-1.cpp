#include <string>
#include <iostream>

extern void print_binary_str(std::string decimal_number) {
    int base10 = std::stoi(decimal_number);

    if (base10 == 0) {
        std::cout << "0" << std::endl;
    }

    std::string base2 = "";
    while (base10 > 0) {
        int remainder = base10 % 2;
        base2 = std::to_string(remainder) + base2;
        base10 = base10 / 2;
    }
    std::cout << base2 << std::endl;
}
