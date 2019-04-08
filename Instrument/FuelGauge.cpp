#include "FuelGauge.h"

FuelGauge::FuelGauge()
{
	fuel = 0;
}

FuelGauge::FuelGauge(int f)
{
	fuel = f;
}

int FuelGauge::getFuel()
{
	return fuel;
}

void FuelGauge::addFuel()
{
	if (fuel < 15)
	{
		fuel++;
	}
}

void FuelGauge::loseFuel()
{
	if (fuel > 0)
	{
		fuel--;
	}
}




