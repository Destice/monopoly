#pragma once
#include "../include/Player.hpp"
#include <string>
#include <vector>

class UIInterface {
public:
  void printRoundInfo(int) const;
  unsigned getNumberOfPlayers() const;
  std::string getNameOfPlayer() const;
  unsigned getNumberOfRounds() const;
  void displayPlayerInfo(const PlayerInformation &) const;
  void printGameResults(const std::vector<std::shared_ptr<IPlayer>> &) const;
  bool propertyBuyDecision(unsigned) const;
};
