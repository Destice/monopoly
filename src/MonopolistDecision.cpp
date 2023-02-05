#include "../include/MonopolistDecision.hpp"
#include <iostream>

bool MonopolistDecision::decideYesOrNo(const std::string& message) const {
    std::cout << std::endl;
    std::cout << "---------------------------------------" << std::endl;
    std::cout << message << ": (y/n) y";
    std::cout << "---------------------------------------" << std::endl;
    std::cout << std::endl;
    return true;
}