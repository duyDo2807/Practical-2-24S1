#include "Move.h"

Move::Move(std::string moveName) : name(moveName) {}

std::string Move::getName() { return name; }