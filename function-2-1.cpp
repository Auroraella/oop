#include <string>

std::string makeBaseTwo(int base10) {
  if (base10 == 0) {
    return "0";
  }

  std::string base2 = "";
  while (base10 > 0) {
    int remainder = base10 % 2;
    base2 = std::to_string(remainder) + base2;
    base10 = base10 / 2;
  }

  return base2;
}