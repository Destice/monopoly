#pragma once
#include "DecisionMakyr.hpp"

class ConsoleDecision : public IDecisionMakyr {
public:
    bool decideYesOrNo(const std::string&) const override;
};