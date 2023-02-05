#pragma once
#include "DecisionMakyr.hpp"

class RandomDecision : public IDecisionMakyr {
public:
    RandomDecision() { srand(time(0)); }
    bool decideYesOrNo(const std::string&) const override;
};