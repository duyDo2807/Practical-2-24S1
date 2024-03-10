#include <iostream>

#include "Computer.h"
#include "Human.h"
#include "Referee.h"

int main() {
  // Create players
  Human humanPlayer("Mei");
  Computer computerPlayer;

  // Create referee
  Referee referee;

  // Play the game
  Player* winner = referee.refGame(&humanPlayer, &computerPlayer);

  // Determine the winner and print the result
  if (winner == nullptr)
    std::cout << "It's a Tie.\n";
  else
    std::cout << winner->getName() << " Wins.\n";

  return 0;
}