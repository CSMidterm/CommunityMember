#include "Employee.h"
#include<iostream>

using namespace std;

Employee::Employee()
{
}

Employee::Employee(unsigned long int ID, string Fname, string Lname, string Address, unsigned long int Cell,
	float Sal, string Dept)
{
	CommunityMember::CommunityMember(ID, Fname, Lname, Address, Cell);
	dept = Dept;
	salary = Sal;
}

Employee::~Employee()
{
}

void Employee::setDept(string Dept)
{
	dept = Dept;
}

void Employee::setSalary(float Sal)
{
	salary = Sal;
}

string Employee::getDept()
{
	return dept;
}

float Employee::getSalary()
{
	return salary;
}

void Employee::Employee::print()
{
	Employee::print();	// prints all 5 data members
	cout << "Department: " << dept << endl
		<< "Salary: " << salary << endl;

}

void Employee::Employee::setAll(unsigned long int ID, string Fname, string Lname, string Address, unsigned long int Cell,
	float Sal, string Dept)
{
	CommunityMember::setAll(ID, Fname, Lname, Address, Cell);

	dept = Dept;
	salary = Sal;
}