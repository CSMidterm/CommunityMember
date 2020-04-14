#include "Employee.h"
#include<iostream>

using namespace std;

Employee::Employee()
{
}

Employee::Employee(unsigned long int ID, string Fname, string Lname, string Address, unsigned long int Cell,
	double Sal)
{
	CommunityMember::CommunityMember(ID, Fname, Lname, Address, Cell);
	
	salary = Sal;
}

Employee::~Employee()
{
}



void Employee::setSalary(double Sal)
{
	salary = Sal;
}


double Employee::getSalary()
{
	return salary;
}

void Employee::Employee::print()
{
	Employee::print();	// prints all 5 data members
	cout << "Salary: " << salary << endl;

}

void Employee::Employee::setAll(unsigned long int ID, string Fname, string Lname, string Address, unsigned long int Cell,
	double Sal)
{
	CommunityMember::setAll(ID, Fname, Lname, Address, Cell);

	
	salary = Sal;
}

void Employee::Employee::ReadData() {
	CommunityMember::ReadData();
	cout << "enter Salary: ";
	cin >> salary;}