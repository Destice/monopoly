#include "../include/Dice.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

D6::D6() { srand(time(0)); }

int D6::roll() { return (rand() % 6 + 1); }

D12::D12() { srand(time(0)); }

int D12::roll() { return (rand() % 12 + 1); }

D20::D20() { srand(time(0)); }

int D20::roll() { return (rand() % 20 + 1); }
