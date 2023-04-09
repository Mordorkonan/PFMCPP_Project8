#pragma once

#include "Vehicle.h"

struct Car : Vehicle
{
    Car(const std::string& s);
    ~Car() override;
    void closeWindows();

    void tryToEvade() override;
};
