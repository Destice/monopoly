#include "../include/ConsoleDecision.hpp"
#include <iostream>

bool ConsoleDecision::decideYesOrNo(const std::string& message) const {
    char playerDecision;
    std::cout << std::endl;
    std::cout << "---------------------------------------" << std::endl;
    std::cout << message << ": (y/n) ";
    std::cin >> playerDecision;
    std::cout << "---------------------------------------" << std::endl;
    std::cout << std::endl;
    return playerDecision == 'y';
}
