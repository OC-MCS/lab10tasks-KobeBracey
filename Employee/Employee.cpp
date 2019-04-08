#include "Employee.h"

Employee::Employee(string n, string num, string date)
{
	name = n;
	number = num;
	hireDate = date;
}

string Employee::getName()
{
	return name;
}

string Employee::getNumber()
{
	return number;
}

string Employee::getHireDate()
{
	return hireDate;
}

void Employee::setName(string n)
{
	name = n;
}

void Employee::setNumber(string num)
{
	number = num;
}

void Employee::setHireDate(string date)
{
	hireDate = date;
}
