#pragma once

class IPlayer;

class AField {
public:
  virtual ~AField() = default;
  AField(int value);

  virtual void standAction(IPlayer &);
  virtual void passAction(IPlayer &);

protected:
  int fieldValue;
};
