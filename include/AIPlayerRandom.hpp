#pragma once

#include "../include/IPlayer.hpp"

class AIPlayerRandom : public IPlayer {
public:
  AIPlayerRandom(const GameBoard &, const std::string &);
};