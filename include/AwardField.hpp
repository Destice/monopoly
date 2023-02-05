#pragma once

#include "../include/AField.hpp"
#include <string>

class AwardField : public AField {
public:
  using AField::AField;
  void standAction(IPlayer &) override;
};
