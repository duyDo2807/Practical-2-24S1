#include "Computer.h"

#include <cstdlib>

Move* Computer::makeMove() {
  const std::string move[] = {"Rock",   "Paper",  "Scissors", "Robot",
                              "Monkey", "Pirate", "Ninja",    "Zombie"};
  int i = rand() % 8;
  return new Move(move[i]);
}

std::string Computer::getName() const { return "Computer"; }