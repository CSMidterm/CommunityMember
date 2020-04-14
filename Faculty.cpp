#include "Faculty.h"
#include<iostream>

using namespace std;

Faculty::Faculty()
{

}

Faculty::Faculty(unsigned long int ID, string Fname, string Lname, string Address, unsigned long int Cell,
	double Sal,
	string Spec,string AC) : Employee(ID, Fname, Lname, Address, Cell, Sal)
{
	specility = Spec;
	AcademicRank = AC;
}

Faculty::~Faculty()
{
}

void Faculty::setSpeciality(string Spec)
{
	specility = Spec;
}

string Faculty::getSpeciality()
{
	return specility;
}

void Faculty::setAcademicRank(string AC)
{
	AcademicRank = AC;
}

string Faculty::getAcademicRank()
{
	return AcademicRank;
}

void Faculty::setAll(unsigned long int ID, string Fname, string Lname, string Address, unsigned long int Cell,
	double Sal,
	string Spec,string AC)
{
	Employee::setAll(ID, Fname, Lname, Address, Cell, Sal);
	AcademicRank = AC;
	specility = Spec;
}

void Faculty::print()
{
	Employee::print();
	cout << "Speciality: " << specility << endl
		<< "AcademicRank: " << AcademicRank << endl;

}

void Faculty::Faculty::ReadData() {
	Employee::ReadData();
	cout << "enter Speciality: ";
	cin >> specility;
	cout << "enter AcademicRank: ";
	cin >> AcademicRank;
}