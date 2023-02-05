#include "../include/AField.hpp"
#include "../include/IPlayer.hpp"

AField::AField(int value) : fieldValue{value} {}

void AField::standAction(IPlayer &) {
  // do nothing
}

void AField::passAction(IPlayer &) {
  // do nothing
}
