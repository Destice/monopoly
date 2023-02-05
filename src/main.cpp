#include "../include/Game.hpp"

int main() {
  UIInterface ui{};
  Game game{boards::onlyProperty, ui};
  game.initGame();
  game.play();

  return 0;
}
