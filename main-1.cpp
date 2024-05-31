// main-1.cpp
#include "Cell.h"
#include "Effect.h"
#include "Utils.h"
#include <iostream>

int main() {
  Cell cell(1, 2, 'A');
  std::cout << "Cell position: (" << std::get<0>(cell.getPos()) << ", " << std::get<1>(cell.getPos()) << ")\n";
  std::cout << "Cell type: " << cell.getType() << "\n";

  auto randomPos = Utils::generateRandomPos(10, 10);
  std::cout << "Random position: (" << std::get<0>(randomPos) << ", " << std::get<1>(randomPos) << ")\n";

  double distance = Utils::calculateDistance(std::make_tuple(1, 2), std::make_tuple(4, 6));
  std::cout << "Distance: " << distance << "\n";

  return 0;
}