#include <iostream>
#include <string>
#include "ProductionWorker.h"
#include "Employee.h"
#include "ShiftSupervisor.h"
using namespace std;

int main()
{
	ProductionWorker emp1("Kobe Bracey", "123", "3/14/2019", 2, 5.25);

	cout << "Employee Name: " << emp1.getName() << endl;
	cout << "Employee Number: " << emp1.getNumber() << endl;
	cout << "Hire Date: " << emp1.getHireDate() << endl;
	if (emp1.getShift() == 1)
	{
		cout << "Employee Shift: Day Shift" << endl;
	}
	else if (emp1.getShift() == 2)
	{
		cout << "Employee Shift: Night Shift" << endl;
	}
	cout << "Employee Pay Rate: $" << emp1.getPayRate() << endl;
	cout << endl;

	ShiftSupervisor sup("Kevin Bryant", "120", "10/4/2018", 1255, 100000);
	cout << "Supervisor Name: " << sup.getName() << endl;
	cout << "Supervisor Number: " << sup.getNumber() << endl;
	cout << "Hire Date: " << sup.getHireDate() << endl;
	cout << "Annual Salary: $" << sup.getSalary() << endl;
	cout << "Yearly Bonus: $" << sup.getBonus() << endl;
	

	return 0;
}