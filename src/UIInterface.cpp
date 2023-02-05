#include "../include/UIInterface.hpp"
#include <iostream>

void UIInterface::printRoundInfo(int roundNumber) const {
  std::cout << "---------------------------------------" << std::endl;
  std::cout << "Runda numer: " << roundNumber << std::endl;
  std::cout << "---------------------------------------" << std::endl;
  std::cout << std::endl;
}

unsigned UIInterface::getNumberOfPlayers() const {
  unsigned numberOfPlayers;
  std::cout << "Podaj liczbe graczy: ";
  std::cin >> numberOfPlayers;
  return numberOfPlayers;
}

std::string UIInterface::getNameOfPlayer() const {
  std::string nameOfPlayer;
  std::cout << "Podaj nazwe gracza : ";
  std::cin >> nameOfPlayer;
  return nameOfPlayer;
}

unsigned UIInterface::getNumberOfRounds() const {
  unsigned maxNumberOfRounds;
  std::cout << "Podaj maksymalna liczbe rund: ";
  std::cin >> maxNumberOfRounds;
  return maxNumberOfRounds;
}

void UIInterface::displayPlayerInfo(const PlayerInformation &playerInfo) const {
  std::cout << "Nazwa gracza: " << playerInfo.name << std::endl;
  std::cout << "Kaska gracza: " << playerInfo.money << std::endl;
  std::cout << "Pozycja gracza: " << playerInfo.position << std::endl;
}

void UIInterface::printGameResults(
    const std::vector<std::shared_ptr<IPlayer>> &players) const {
  std::cout << std::endl;
  std::cout << "---------------------------------------" << std::endl;
  std::cout << "Wynik gry: " << std::endl;
  std::cout << "---------------------------------------" << std::endl;
  std::cout << std::endl;
  for (const auto &player : players) {
    displayPlayerInfo(player->getInfo());
  }
}

bool UIInterface::propertyBuyDecision(unsigned buyingPrice) const {
  char playerDecision;
  std::cout << std::endl;
  std::cout << "---------------------------------------" << std::endl;
  std::cout << "Mozesz kupic to pole za: " << buyingPrice << "$" << std::endl;
  std::cout << "Decyzja (y/n): ";
  std::cin >> playerDecision;
  std::cout << "---------------------------------------" << std::endl;
  std::cout << std::endl;
  return playerDecision == 'y';
}
