#include "Referee.h"

#include <unordered_set>

#include "Move.h"

Referee::Referee() {}

Player* Referee::refGame(Player* player1, Player* player2) {
  Move* play1 = player1->makeMove();
  Move* play2 = player2->makeMove();

  std::unordered_set<std::string> RPS = {"Rock", "Paper", "Scissors"};
  std::unordered_set<std::string> MRPNZ = {"Monkey", "Robot", "Pirate", "Ninja",
                                           "Zombie"};

  std::string p1 = play1->getName();
  std::string p2 = play2->getName();

  std::cout << p1;
  std::cout << p2;

  delete play1;
  delete play2;

  if (RPS.count(p1) && RPS.count(p2)) {
    if (p1 == p2) {
      return nullptr;
    } else if ((p1 == "Rock" && p2 == "Scissors") ||
               (p1 == "Scissors" && p2 == "Paper") ||
               (p1 == "Paper" && p2 == "Rock")) {
      return player1;
    } else {
      return player2;
    }
  } else if (MRPNZ.count(p1) && MRPNZ.count(p2)) {
    if (p1 == p2) {
      return nullptr;
    } else if ((p1 == "Robot" && (p2 == "Ninja" || p2 == "Zombie")) ||
               (p1 == "Pirate" && (p2 == "Robot" || p2 == "Monkey")) ||
               (p1 == "Ninja" && (p2 == "Pirate" || p2 == "Zombie")) ||
               (p1 == "Monkey" && (p2 == "Robot" || p2 == "Ninja")) ||
               (p1 == "Zombie" && (p2 == "Monkey" || p2 == "Pirate"))) {
      return player1;
    } else {
      return player2;
    }
  } else {
    return nullptr;
  }
}