#pragma once
#include <string>

class IDecisionMakyr {
    public:
        virtual bool decideYesOrNo(const std::string&) const = 0;
};