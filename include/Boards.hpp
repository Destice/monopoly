#pragma once

#include "../include/AwardField.hpp"
#include "../include/DepositField.hpp"
#include "../include/PenaltyField.hpp"
#include "../include/PrisonField.hpp"
#include "../include/PropertyField.hpp"
#include "../include/StartField.hpp"
#include <array>
#include <memory>

using BoardFields = std::array<std::shared_ptr<AField>, 40>;

namespace boards {
const BoardFields fourTypesOfFields{
    std::make_shared<StartField>(400),     std::make_shared<AwardField>(200),
    std::make_shared<PenaltyField>(100),   std::make_shared<AwardField>(200),
    std::make_shared<DepositField>(100),   std::make_shared<DepositField>(200),
    std::make_shared<PenaltyField>(100),   std::make_shared<AwardField>(200),
    std::make_shared<PenaltyField>(100),   std::make_shared<AwardField>(200),
    std::make_shared<PenaltyField>(100),   std::make_shared<AwardField>(200),
    std::make_shared<PropertyField>(2000), std::make_shared<AwardField>(200),
    std::make_shared<PenaltyField>(100),   std::make_shared<PrisonField>(3),
    std::make_shared<PropertyField>(1000), std::make_shared<AwardField>(200),
    std::make_shared<PenaltyField>(100),   std::make_shared<AwardField>(200),
    std::make_shared<PenaltyField>(100),   std::make_shared<AwardField>(200),
    std::make_shared<PenaltyField>(100),   std::make_shared<PrisonField>(3),
    std::make_shared<PenaltyField>(100),   std::make_shared<AwardField>(200),
    std::make_shared<PropertyField>(5000), std::make_shared<AwardField>(200),
    std::make_shared<PropertyField>(5000), std::make_shared<AwardField>(200),
    std::make_shared<PenaltyField>(100),   std::make_shared<PrisonField>(5),
    std::make_shared<PenaltyField>(100),   std::make_shared<AwardField>(200),
    std::make_shared<PrisonField>(3),      std::make_shared<AwardField>(200),
    std::make_shared<PenaltyField>(100),   std::make_shared<AwardField>(200),
    std::make_shared<PrisonField>(3),      std::make_shared<AwardField>(200)};

const BoardFields onlyProperty{
    std::make_shared<StartField>(400),    std::make_shared<PropertyField>(100),
    std::make_shared<PropertyField>(100), std::make_shared<PropertyField>(100),
    std::make_shared<PropertyField>(100), std::make_shared<PropertyField>(100),
    std::make_shared<PropertyField>(100), std::make_shared<PropertyField>(100),
    std::make_shared<PropertyField>(100), std::make_shared<PropertyField>(100),
    std::make_shared<PropertyField>(100), std::make_shared<PropertyField>(100),
    std::make_shared<PropertyField>(100), std::make_shared<PropertyField>(100),
    std::make_shared<PropertyField>(100), std::make_shared<PropertyField>(100),
    std::make_shared<PropertyField>(100), std::make_shared<PropertyField>(100),
    std::make_shared<PropertyField>(100), std::make_shared<PropertyField>(100),
    std::make_shared<PropertyField>(100), std::make_shared<PropertyField>(100),
    std::make_shared<PropertyField>(100), std::make_shared<PropertyField>(100),
    std::make_shared<PropertyField>(100), std::make_shared<PropertyField>(100),
    std::make_shared<PropertyField>(100), std::make_shared<PropertyField>(100),
    std::make_shared<PropertyField>(100), std::make_shared<PropertyField>(100),
    std::make_shared<PropertyField>(100), std::make_shared<PropertyField>(100),
    std::make_shared<PropertyField>(100), std::make_shared<PropertyField>(100),
    std::make_shared<PropertyField>(100), std::make_shared<PropertyField>(100),
    std::make_shared<PropertyField>(100), std::make_shared<PropertyField>(100),
    std::make_shared<PropertyField>(100), std::make_shared<PropertyField>(100),
};
} // namespace boards
