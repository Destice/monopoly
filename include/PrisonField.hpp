#pragma once

#include "../include/AField.hpp"

#include <cmath>
#include <memory>

class IPlayer;
class PrisonField : public AField {
public:
  using AField::AField;
  void standAction(IPlayer &player) override;
};