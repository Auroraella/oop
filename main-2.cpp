
#include "Character.h"
#include "Trap.h"
#include <iostream>

int main() {
  Character character(1, 2);
  Trap trap(3, 4);

  std::cout << "Character position: (" << std::get<0>(character.getPos()) << ", " << std::get<1>(character.getPos()) << ")\n";
  std::cout << "Trap position: (" << std::get<0>(trap.getPos()) << ", " << std::get<1>(trap.getPos()) << ")\n";

  character.move(1, 0);
  std::cout << "Character moved to: (" << std::get<0>(character.getPos()) << ", " << std::get<1>(character.getPos()) << ")\n";

  trap.apply(character);
  std::cout << "Character type after trap: " << character.getType() << "\n";

  return 0;
}