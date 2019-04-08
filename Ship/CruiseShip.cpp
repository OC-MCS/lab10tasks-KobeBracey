#include "CruiseShip.h"
#include <string>
CruiseShip::CruiseShip(string n, string y, int max) : Ship(n, y)
{
	maxPassengers = max;
}

int CruiseShip::getPassengers()
{
	return maxPassengers;
}

void CruiseShip::setPassengers(int max)
{
	maxPassengers = max;
}

void CruiseShip::print()
{
	cout << "Ship Name: " << getName() << endl;
	cout << "Max Capacity: " << getPassengers() << " people" << endl;
	cout << endl;
}

