#include "../include/PenaltyField.hpp"
#include "../include/IPlayer.hpp"

void PenaltyField::standAction(IPlayer &player) {
  player.subtractMoney(fieldValue);
}
