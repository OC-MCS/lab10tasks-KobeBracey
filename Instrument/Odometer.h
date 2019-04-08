#pragma once
#include "FuelGauge.h"
class Odometer
{
private:
	int milege;
public:
	Odometer();
	int getMilege();
	void addMile(FuelGauge& fuel);

};

