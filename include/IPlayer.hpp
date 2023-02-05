#pragma once
#include "../include/BoardIterator.hpp"
#include "../include/GameBoard.hpp"
#include "../include/PlayerInformation.hpp"
#include "../include/DecisionMakyr.hpp"
#include <memory>

class IPlayer {
public:
  IPlayer(const GameBoard &gameBoard, const std::string &name, const std::shared_ptr<IDecisionMakyr> dec)
      : name{name}, money{1000}, position{gameBoard.getFields()}, decision(dec) {}

  void makeMove(unsigned numberOfSteps) {
    // No check if it is the first start field pass of the game
    // Now it gives money but shouldn't
    for (unsigned step = 0; step < numberOfSteps; ++step) {
      position.getField()->passAction(*this);
      position.move();
    }
    position.getField()->standAction(*this);
  }

  void addMoney(int value) { money += value; }
  void subtractMoney(int value) { money -= value; }
  std::shared_ptr<IDecisionMakyr> makeDecision() { return decision; }
  unsigned trySubtractMoney(int value) {
    if (value <= money) {
      subtractMoney(value);
      return value;
    }
    bankrupt = true;
    return money;
  }

  PlayerInformation getInfo() const {
    return {name, money, position.getCurrentPosition()};
  }
  bool isActive() { return turnsToSkip == 0; }
  void skipTurn() { turnsToSkip--; }
  void addTurnsToSkip(unsigned numberOfTurnsToSkip) {
    turnsToSkip += numberOfTurnsToSkip;
  }
  bool isBankrupt() { return bankrupt; }

protected:
  std::string name;
  int money;
  BoardIterator position;
  std::shared_ptr<IDecisionMakyr> decision;
  unsigned turnsToSkip;
  bool bankrupt{0};
};
