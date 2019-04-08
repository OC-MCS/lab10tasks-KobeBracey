#pragma once
class FuelGauge
{
private:
	int fuel;
public:
	FuelGauge();
	FuelGauge(int);
	int getFuel();
	void addFuel();
	void loseFuel();
};

