#pragma once

#include "../include/IPlayer.hpp"

class AIPlayerMonopolist : public IPlayer {
public:
  AIPlayerMonopolist(const GameBoard &, const std::string &);
};
