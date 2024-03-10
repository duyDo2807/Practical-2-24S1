#include "Computer.h"

#include <cstdlib>

Move* Computer::makeMove() { return new Move("Rock"); }

std::string Computer::getName() { return "Computer"; }