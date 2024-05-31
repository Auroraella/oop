#ifndef CELL_H
#define CELL_H
#include <tuple>

class Cell {
private:
  std::tuple<int, int> position;
  char entity;

public:
  Cell(int x, int y, char entity) : position(x, y), entity(entity) {}

  std::tuple<int, int> getPos() { return position; }
  char getEntity() { return entity; }
  void setPos(int x, int y) { position = std::make_tuple(x, y); }
  void setEntity(char entity) { this->entity = entity; }
};

#endif // !CELL_H