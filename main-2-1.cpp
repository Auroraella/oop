#include <iostream>
#include <string>
using namespace std;

extern string makeBaseTwo(int base10);
int main() {
  int base10;
  std::cout << "Enter a number: ";
  std::cin >> base10;

  std::string base2 = makeBaseTwo(base10);
  std::cout << "Base 2 equivalent: " << base2 << std::endl;

  return 0;
}