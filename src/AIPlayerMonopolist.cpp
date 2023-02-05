#include "../include/AIPlayerMonopolist.hpp"
#include "../include/MonopolistDecision.hpp"

AIPlayerMonopolist::AIPlayerMonopolist(const GameBoard &gameBoard, const std::string &name)
    : IPlayer{gameBoard, name, std::make_shared<MonopolistDecision>()} {}