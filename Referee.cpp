#include "Referee.h"

#include <unordered_map>

#include "Move.h"

Referee::Referee() {}

Player* Referee::refGame(Player* player1, Player* player2) {
  Move* play1 = player1->makeMove();
  Move* play2 = player2->makeMove();

  std::unordered_map<std::string, std::string> result1 = {
      {"Rock", "Scissors"}, {"Paper", "Rock"}, {"Scissors", "Paper"}};
  std::unordered_map<std::string, std::string> result2 = {
      {"Monkey", "Ninja"}, {"Monkey", "Robot"}, {"Robot", "Ninja"},
      {"Robot", "Zombie"}, {"Pirate", "Robot"}, {"Pirate", "Monkey"},
      {"Ninja", "Pirate"}, {"Ninja", "Zombie"}, {"Zombie", "Pirate"},
      {"Zombie", "Monkey"}};

  std::string move1Name = play1->getName();
  std::string move2Name = play2->getName();

  delete play1;
  delete play2;

  if (result1.find(move1Name) != result1.end() &&
      result1[move1Name] == move2Name)
    return player1;
  else if (result1.find(move2Name) != result1.end() &&
           result1[move2Name] == move1Name)
    return player2;
  else if (result2.find(move1Name) != result2.end() &&
           result2[move1Name] == move2Name)
    return player1;
  else if (result2.find(move2Name) != result2.end() &&
           result2[move2Name] == move1Name)
    return player2;
  else
    return nullptr;
}