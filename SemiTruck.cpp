#include <iostream>
#include "SemiTruck.h"

SemiTruck::SemiTruck(const std::string& n) : Vehicle(n) { }

SemiTruck::~SemiTruck() { }

void SemiTruck::pressTheBuzzer()
{
    setSpeed(85);
    std::cout << name << " is buzzing loud!" << std::endl;
}

void SemiTruck::pullOver()
{
    setSpeed(0);
    std::cout << name << " is getting pulled over." << std::endl;
}
