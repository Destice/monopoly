#include "../include/GameBoard.hpp"

GameBoard::GameBoard(const BoardFields &boardFields) : fields{boardFields} {}

const BoardFields &GameBoard::getFields() const { return fields; }
