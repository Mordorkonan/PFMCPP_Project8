#pragma once

#include "Vehicle.h"

struct SemiTruck : Vehicle
{
    SemiTruck(const std::string& n);
    SemiTruck(const SemiTruck&) = default;
    ~SemiTruck() override = default;
    SemiTruck& operator=(const SemiTruck&) = default;

    void pullOver();
    void pressTheBuzzer();
};
