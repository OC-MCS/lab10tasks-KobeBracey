#pragma once
#include "Ship.h"

class CruiseShip : public Ship
{
private:
	int maxPassengers;
public:
	CruiseShip(string, string, int);
	int getPassengers();
	void setPassengers(int);
	virtual void print();
};