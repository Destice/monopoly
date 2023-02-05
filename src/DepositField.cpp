#include "../include/DepositField.hpp"
#include "../include/IPlayer.hpp"

void DepositField::standAction(IPlayer &player) {
  player.addMoney(depositBalance);
  depositBalance = 0;
}

void DepositField::passAction(IPlayer &player) {
  player.subtractMoney(fieldValue);
  depositBalance += fieldValue;
}
