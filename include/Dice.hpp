#include "IDie.hpp"

class D6 : virtual public IDie {
public:
  D6();
  int roll() override;

private:
  int result;
};

class D12 : virtual public IDie {
public:
  D12();
  int roll() override;

private:
  int result;
};

class D20 : virtual public IDie {
public:
  D20();
  int roll() override;

private:
  int result;
};