// Bhavesh Malhi
// bhavesh05@csu.fullerton.edu
// @bhavesh1024
// Partners: @Julie0211

#include "blackjack_functions.h"
#include <iostream>

bool IsAce(const std::string& card_name) {
  if (card_name == "A") {
    return true;
  } else {
    return false;
  }
}

bool IsFaceCard(const std::string& card_name) {
  if (card_name == "J" || card_name == "Q" || card_name == "K") {
    return true;
  } else {
    return false;
  }
}

bool IsNumberCard(const std::string& card_name) {
  if (card_name == "2" || card_name == "3" || card_name == "4" ||
      card_name == "5" || card_name == "6" || card_name == "7" ||
      card_name == "8" || card_name == "9" || card_name == "10") {
    return true;
  } else {
    return false;
  }
}

bool IsCardName(const std::string& str) {
  if (IsAce(str) == true || IsFaceCard(str) == true ||
      IsNumberCard(str) == true) {
    return true;
  }
  return false;
}

int CardPoints(const std::string& card_name) {
  if (IsAce(card_name) == true) {
    return 1;
  } else if (IsFaceCard(card_name) == true) {
    return 10;
  } else if (IsNumberCard(card_name) == true) {
    return std::stoi(card_name);
  } else {
    return 0;
  }
}

bool IsBust(int score) {
  if (score > 21) {
    std::cout << "Bust! \n";
    return true;
  }
  return false;
}

int TwoCardHandScore(const std::string& card_1, const std::string& card_2) {
  int two_card_hand_score = CardPoints(card_1) + CardPoints(card_2);
  if ((two_card_hand_score <= 11) && (IsAce(card_1) || IsAce(card_2))) {
    two_card_hand_score += 10;
  }
  return two_card_hand_score;
}
