#include "Teacher.h"

Teacher::Teacher(unsigned long int ID, string Fname, string Lname, string Address, unsigned long int Cell,
	double Sal,
	string Spec, string AC,
	unsigned int HPW) : Faculty(ID, Fname, Lname, Address, Cell, Sal, Spec, AC)
{
	HoursPerWeek = HPW;
}

void Teacher::setHoursPerWeek(unsigned int HPW)
{
	HoursPerWeek = HPW;
}

unsigned int Teacher::getHoursPerWeek()
{
	return HoursPerWeek;
}

void Teacher::print()
{
	Faculty::print();
	cout << "Hours per Week: " << HoursPerWeek << endl;
}

void Teacher::setAll(unsigned long int ID, string Fname, string Lname, string Address, unsigned long int Cell,
	double Sal,
	string Spec, string AC,
	unsigned int HPW)
{
	Faculty::setAll(ID, Fname, Lname, Address, Cell, Sal, Spec, AC);
	HoursPerWeek = HPW;
}

void Teacher::Teacher::ReadData() {
	Faculty::ReadData();
	cout << "enter Hours per Week: ";
	cin >> HoursPerWeek;
}