#pragma once
#include <iostream>
using namespace std;
class Employee
{
private:
	string name;
	string number;
	string hireDate;
public:
	Employee(string, string, string);
	string getName();
	string getNumber();
	string getHireDate();
	void setName(string n);
	void setNumber(string num);
	void setHireDate(string date);
};

