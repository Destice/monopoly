#include "../include/BoardIterator.hpp"

void BoardIterator::move() {
  currentPosition++;
  currentPosition = currentPosition >= boardFields.size()
                        ? currentPosition % boardFields.size()
                        : currentPosition;
}

std::shared_ptr<AField> BoardIterator::getField() const {
  return boardFields.at(currentPosition);
}

unsigned BoardIterator::getCurrentPosition() const { return currentPosition; }
