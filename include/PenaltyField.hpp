#pragma once

#include "../include/AField.hpp"

class PenaltyField : public AField {
public:
  using AField::AField;
  void standAction(IPlayer &) override;
};
