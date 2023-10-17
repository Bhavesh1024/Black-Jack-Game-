// Julie Araujo
// julie0211@csu.fullerton.edu
// Julie0211
// partners: Bhavesh

#include <iostream>
#include <string>
#include <vector>

#include "blackjack_functions.h"

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments(argv, argv + argc);
  if (arguments.size() !=3) {
    std::cout<< "error: you must supply two
    arguments \n";
    return 1;
  }

  std::string card_1 = arguments[1];
  std::string card_2 = arguments[2];
  if (!IsCardName(card_1)||!IsCardName(card_2)) {
    std::cout<< "error: unkown card \n";
    return 1;
  }

  int total_score = TwoCardHandScore (card_1, card_2); {
  std::cout<< total_score << std::end1;

  return 0;
}
