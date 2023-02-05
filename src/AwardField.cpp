#include "../include/AwardField.hpp"
#include "../include/IPlayer.hpp"

void AwardField::standAction(IPlayer &player) { player.addMoney(fieldValue); }
