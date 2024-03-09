#ifndef PLAYER_H
#define PLAYER_H

#include "Move.h"

class Player {
 public:
  virtual Move* makeMove();
  virtual std::string getName() const;
};

#endif