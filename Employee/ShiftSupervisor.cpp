#include "ShiftSupervisor.h"

ShiftSupervisor::ShiftSupervisor(string n, string num, string date, double sal, double b) : Employee(n, num, date)
{
	salary = sal;
	bonus = b;
}

double ShiftSupervisor::getSalary()
{
	return salary;
}

double ShiftSupervisor::getBonus()
{
	return bonus;
}

void ShiftSupervisor::setSalary(double sal)
{
	salary = sal;
}

void ShiftSupervisor::setBonus(double b)
{
	bonus = b;
}


