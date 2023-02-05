

#include "../include/AIPlayerRandom.hpp"
#include "../include/RandomDecision.hpp"

AIPlayerRandom::AIPlayerRandom(const GameBoard &gameBoard, const std::string &name)
    : IPlayer{gameBoard, name, std::make_shared<RandomDecision>()} {}