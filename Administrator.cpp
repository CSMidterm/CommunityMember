#include "Administrator.h"

Administrator::Administrator(unsigned long int ID, string Fname, string Lname, string Address, unsigned long int Cell,
	double Sal,
	string Spec, string AC,
	string P) : Faculty(ID, Fname, Lname, Address, Cell, Sal, Spec, AC)
{
	Position = P;
}

void Administrator::setPosition(string P)
{
	Position = P;
}

string Administrator::getPosition()
{
	return Position;
}

void Administrator::print()
{
	Faculty::print();
	cout << "Position: " << Position << endl;
}

void Administrator::setAll(unsigned long int ID, string Fname, string Lname, string Address, unsigned long int Cell,
	double Sal,
	string Spec, string AC,
	string P)
{
	Faculty::setAll(ID, Fname, Lname, Address, Cell, Sal, Spec, AC);
	Position = P;
}

void Administrator::Administrator::ReadData() {
	Faculty::ReadData();
	cout << "enter position : ";
	cin >> Position;
}