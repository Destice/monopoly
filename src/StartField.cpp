#include "../include/StartField.hpp"
#include "../include/IPlayer.hpp"

void StartField::passAction(IPlayer &player) { player.addMoney(fieldValue); }
