#include "../include/Boards.hpp"
#include "../include/Dice.hpp"
#include "../include/DiceCup.hpp"
#include "../include/GameBoard.hpp"
#include "../include/Player.hpp"
#include "../include/UIInterface.hpp"
#include <string>
#include <vector>

class Game {
public:
  Game(const BoardFields &, const UIInterface &);
  void play();
  void addPlayer(std::string name);
  void processTurn(IPlayer &);
  void processRound(int);
  void initGame();

private:
  GameBoard gameboard;
  UIInterface ui;
  DiceCup diceCup;
  std::vector<std::shared_ptr<IPlayer>> players;
  int numberOfRounds{0};
};
