#pragma once

#include "../include/Boards.hpp"

class GameBoard {
public:
  GameBoard(const BoardFields &);

  const BoardFields &getFields() const;

private:
  const BoardFields &fields;
};
