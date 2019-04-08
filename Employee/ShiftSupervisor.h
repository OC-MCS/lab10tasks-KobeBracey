#pragma once
#include "Employee.h"

class ShiftSupervisor : public Employee
{
private:
	double salary;
	double bonus;
public:
	ShiftSupervisor(string, string, string, double, double);
	double getSalary();
	double getBonus();
	void setSalary(double);
	void setBonus(double);
};