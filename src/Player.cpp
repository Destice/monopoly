#include "../include/Player.hpp"
#include "../include/ConsoleDecision.hpp"

Player::Player(const GameBoard &gameBoard, const std::string &name)
    : IPlayer{gameBoard, name, std::make_shared<ConsoleDecision>()} {}
