#include "CargoShip.h"
#include <string>
CargoShip::CargoShip(string n, string y, int cap) : Ship(n, y)
{
	capacity = cap;
}

int CargoShip::getCapacity()
{
	return capacity;
}

void CargoShip::setCapacity(int cap)
{
	capacity = cap;
}

void CargoShip::print()
{
	cout << "Ship Name: " << getName() << endl;
	cout << "Max Capacity: " << getCapacity() << " tons" << endl;
	cout << endl;
}
