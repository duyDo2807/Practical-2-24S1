#ifndef COMPUTER_H
#define COPUTER_H
#include "Player.h"

class Computer : public Player {
 public:
  Move* makeMove() override;
  std::string getName() const override;
};

#endif