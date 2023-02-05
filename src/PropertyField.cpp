#include "../include/PropertyField.hpp"
#include "../include/IPlayer.hpp"

void PropertyField::standAction(IPlayer &player) {
  if (owner != nullptr) {
    if (player.getInfo().name != owner->getInfo().name) {
      // player.subtractMoney(rent); // TODO try subtract
      owner->addMoney(player.trySubtractMoney(rent));
    }
  } else {
    std::string buyingMessage = "Mozesz kupic to pole za: " + std::to_string(fieldValue) + "$";
    if (player.makeDecision()->decideYesOrNo(buyingMessage)) {
      if(player.trySubtractMoney(fieldValue) == static_cast<unsigned int>(fieldValue))
        owner = &player;
    }
  }
}
