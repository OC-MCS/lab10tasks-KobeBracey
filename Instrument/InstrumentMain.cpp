// main code goes here
#include "Odometer.h" 
#include "FuelGauge.h"
#include <iostream>
using namespace std;

int main()
{
	FuelGauge f1(24);
	Odometer o1;
	//f1.addFuel();

	for (int i = 0; i < 48; i++)
	{
		o1.addMile(f1);
	}
	cout << "Fuel left: " << f1.getFuel() << endl;
	cout << "Current Milege: " << o1.getMilege() << endl;
	return 0;
}