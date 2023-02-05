#pragma once

#include "../include/AField.hpp"

class DepositField : public AField {
public:
  using AField::AField;
  void standAction(IPlayer &) override;
  void passAction(IPlayer &) override;

private:
  unsigned depositBalance;
};
