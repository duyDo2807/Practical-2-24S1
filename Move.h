#ifndef MOVE_H
#define MOVE_H
#include <iostream>
#include <string>

class Move {
 private:
  std::string name;

 public:
  Move(std::string moveName);
  std::string getName();
};

#endif