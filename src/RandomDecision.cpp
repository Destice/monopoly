#include "../include/RandomDecision.hpp"
#include <iostream>

bool RandomDecision::decideYesOrNo(const std::string& message) const {
    std::cout << std::endl;
    std::cout << "---------------------------------------" << std::endl;
    char playerDecision = (rand() % 100) % 2 == 0 ? 'y' : 'n';
    std::cout << message << ": (y/n) " << playerDecision;
    std::cout << "---------------------------------------" << std::endl;
    std::cout << std::endl;
    return playerDecision == 'y';
}
