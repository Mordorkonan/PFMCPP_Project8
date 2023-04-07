#pragma once

#include "Vehicle.h"

struct SemiTruck : public Vehicle
{
    SemiTruck(const std::string& n);
    ~SemiTruck() override;
    void pullOver();
    void pressTheBuzzer();
};
