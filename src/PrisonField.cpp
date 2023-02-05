#include "../include//PrisonField.hpp"
#include "../include/IPlayer.hpp"

void PrisonField::standAction(IPlayer &player) {
  player.addTurnsToSkip(fieldValue);
}
