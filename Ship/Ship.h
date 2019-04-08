#pragma once
#include <iostream>
using namespace std;

class Ship
{
private:
	string name;
	string year;
public:
	Ship(string, string);
	string getName();
	string getYear();
	void setName(string);
	void setYear(string);
	virtual void print();
};