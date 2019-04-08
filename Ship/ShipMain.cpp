#include <iostream>
#include <string>
#include "Ship.h"
#include "CargoShip.h"
#include "CruiseShip.h"

int main()
{
	Ship *s[3] = { new Ship("Titanic", "1912"), new CruiseShip("Carnival", "2000", 100), new CargoShip("Tanker", "2019", 5000) };

	for (int i = 0; i < 3; i++)
	{
		s[i]->print();
	}

	return 0;
}