#ifndef PLAYER_H
#define PLAYER_H

#include <string>

#include "Move.h"

class Player {
 public:
  virtual Move* makeMove();
  virtual std::string getName();
};

#endif  // PLAYER_H