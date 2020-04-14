#pragma once
#include"Employee.h"

class Staff : public Employee
{
public:
	Staff();
	~Staff();
	Staff(unsigned long int, string, string, string, unsigned long int,
		double, string);

	void setDepartment(string);
	string getDepartment();

	void setAll(unsigned long int, string, string, string, unsigned long int,
		double, string);

	void print();
	void ReadData();
private:
	string Department;
};

