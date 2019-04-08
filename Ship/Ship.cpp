#include "Ship.h"
#include <string>

Ship::Ship(string n, string y)
{
	name = n;
	year = y;
}

string Ship::getName()
{
	return name;
}

string Ship::getYear()
{
	return year;
}

void Ship::setName(string n)
{
	name = n;
}

void Ship::setYear(string y)
{
	year = y;
}

void Ship::print()
{
	cout << "Ship Name: " << getName() << endl;
	cout << "Ship Year: " << getYear() << endl;
	cout << endl;
}

