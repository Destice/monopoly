#pragma once

#include "../include/AField.hpp"

class StartField : public AField {
public:
  using AField::AField;
  void passAction(IPlayer &) override;
};
