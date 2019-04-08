#include "Odometer.h" 
#include "FuelGauge.h"
#include <iostream>
using namespace std;


Odometer::Odometer()
{
	milege = 0;
}

int Odometer::getMilege()
{
	return milege; 
}


void Odometer::addMile(FuelGauge &fuel)
{
	if (milege < 999999)
	{
		milege++;
	}
	else
	{
		milege = 0;
	}
	if (milege % 24 == 0)
	{
		fuel.loseFuel();
	}
}


