#include "Staff.h"
#include<iostream>

using namespace std;

Staff::Staff()
{

}

Staff::Staff(unsigned long int ID, string Fname, string Lname, string Address, unsigned long int Cell,
	double Sal, string Dept) : Employee(ID, Fname, Lname, Address, Cell, Sal)
{
	Department = Dept;
}

Staff::~Staff()
{
}

void Staff::setDepartment(string Dept)
{
	Department = Dept;
}

string Staff::getDepartment()
{
	return Department;
}

void Staff::setAll(unsigned long int ID, string Fname, string Lname, string Address, unsigned long int Cell,
	double Sal, string Dept)
{
	Employee::setAll(ID, Fname, Lname, Address, Cell, Sal);

	Department = Dept;
}

void Staff::print()
{
	Employee::print();
	cout << "Department: " << Department << endl;
}

void Staff::Staff::ReadData() {
	Employee::ReadData();
	cout << "enter Department: ";
	cin >> Department;
}

