// main-1.cpp
#include "Cell.h"
#include "Effect.h"
#include "Utils.h"
#include <iostream>

int main() {
  Cell cell(1, 2, 'E');
  std::cout << "Cell position: (" << std::get<0>(cell.getPos()) << ", " << std::get<1>(cell.getPos()) << ")\n";
  std::cout << "Cell type: " << cell.getEntity() << "\n";

  std::tuple<int, int> pos = Utils::generateRandomPos(10, 10);
  std::cout << "Random position: (" << std::get<0>(pos) << ", " << std::get<1>(pos) << ")\n";

  return 0;
}