#include "Human.h"

#include <iostream>

Human::Human(std::string name) : name(name) {}

Move* Human::makeMove() {
  std::string moveName;
  std::cout << "Enter Move: ";
  std::cin >> moveName;
  return new Move(moveName);
};

std::string Human::getName() const { return name; }