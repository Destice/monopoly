#pragma once

#include "../include/Boards.hpp"
#include "../include/GameBoard.hpp"

class BoardIterator {
public:
  BoardIterator(const BoardFields &boardFields)
      : boardFields{boardFields}, currentPosition{0} {}

  void move();

  std::shared_ptr<AField> getField() const;
  unsigned getCurrentPosition() const;

private:
  const BoardFields &boardFields;
  unsigned currentPosition;
};