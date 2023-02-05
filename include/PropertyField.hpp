#pragma once

#include "../include/AField.hpp"
#include <cmath>
#include <memory>

class IPlayer;
class PropertyField : public AField {
public:
  using AField::AField;
  PropertyField(int value)
      : AField(value), owner{}, rent{static_cast<unsigned int>(value * 0.1)} {};
  void standAction(IPlayer &) override;

private:
  // std::shared_ptr<IPlayer> owner;
  IPlayer *owner;
  // unsigned buyingPrice;
  unsigned rent;
};