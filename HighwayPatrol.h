#pragma once 

#include "Vehicle.h"

struct Highway;
struct HighwayPatrol : Vehicle 
{
    HighwayPatrol();
    HighwayPatrol(const HighwayPatrol&) = default;
    ~HighwayPatrol() override = default;
    HighwayPatrol& operator=(const HighwayPatrol&) = default;

    void scanHighway(Highway* h);
    void pullOver( Vehicle* v, bool willArrest, Highway* h );
};
