#pragma once
#include "Employee.h"
class ProductionWorker : public Employee
{
private:
	int shift;
	double payRate;
public:
	ProductionWorker(string, string, string, int, double);
	int getShift();
	double getPayRate();
	void setShift(int s);
	void setPayRate(double pay);
};

