#include "IDie.hpp"
#include <memory>
#include <vector>

class DiceCup {
public:
  int roll();
  void addDie(std::shared_ptr<IDie> die);

private:
  std::vector<std::shared_ptr<IDie>> cup;
};
