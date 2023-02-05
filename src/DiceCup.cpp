#include "../include/DiceCup.hpp"

void DiceCup::addDie(std::shared_ptr<IDie> die) {
  cup.emplace_back(die);
} // konstruktor??

int DiceCup::roll() {
  int result = 0;
  for (auto &die : cup) {
    result += die->roll();
  }
  return result;
}
