#pragma once
#include "Ship.h"

class CargoShip : public Ship
{
private:
	int capacity;
public:
	CargoShip(string, string, int);
	int getCapacity();
	void setCapacity(int);
	virtual void print();
};