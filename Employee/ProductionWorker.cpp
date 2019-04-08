#include "ProductionWorker.h"
#include "Employee.h"


ProductionWorker::ProductionWorker(string n, string num, string date, int s, double pay) : Employee(n, num, date)
{
	shift = s;
	payRate = pay;
}

int ProductionWorker::getShift()
{
	return shift;
}

double ProductionWorker::getPayRate()
{
	return payRate;
}

void ProductionWorker::setShift(int s)
{
	shift = s;
}

void ProductionWorker::setPayRate(double pay)
{
	payRate = pay;
}
