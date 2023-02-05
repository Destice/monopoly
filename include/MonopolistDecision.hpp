#pragma once
#include "DecisionMakyr.hpp"

class MonopolistDecision : public IDecisionMakyr {
public:
    bool decideYesOrNo(const std::string&) const override;
};