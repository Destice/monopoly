#pragma once

#include "../include/BoardIterator.hpp"
#include "../include/IPlayer.hpp"
#include <string>
class Player : public IPlayer {
public:
  Player(const GameBoard &, const std::string &);
};
