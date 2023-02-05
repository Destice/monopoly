#include "../include/Game.hpp"
#include <iostream>

Game::Game(const BoardFields &boardFields, const UIInterface &ui)
    : gameboard{boardFields}, ui{ui} {}

void Game::initGame() {
  const unsigned numberOfPlayers = ui.getNumberOfPlayers();

  for (unsigned i = 0; i < numberOfPlayers; ++i) {
    addPlayer(ui.getNameOfPlayer());
  }

  numberOfRounds = ui.getNumberOfRounds();
  std::shared_ptr<IDie> dice1 = std::make_shared<D6>();
  std::shared_ptr<IDie> dice2 = std::make_shared<D12>();
  diceCup.addDie(dice1);
  diceCup.addDie(dice2);
}

void Game::addPlayer(std::string name) {
  const auto player = std::make_shared<Player>(gameboard, name);
  players.emplace_back(player);
}

void Game::processTurn(IPlayer &player) {
  ui.displayPlayerInfo(player.getInfo());
  if (player.isBankrupt())
    return;
  if (!player.isActive()) {
    player.skipTurn();
    std::cout << "Tura pominieta!" << std::endl;
  } else {
    int diceRoll = diceCup.roll();
    std::cout << "Rzut kostek: " << diceRoll << std::endl;

    player.makeMove(diceRoll);
    ui.displayPlayerInfo(player.getInfo());
  }
}

void Game::processRound(int roundNumber) {
  ui.printRoundInfo(roundNumber + 1);

  for (auto &player : players)
    processTurn(*player);
}

void Game::play() {
  for (int i = 0; i < numberOfRounds; i++) {
    processRound(i);
  }
  ui.printGameResults(players);
}
