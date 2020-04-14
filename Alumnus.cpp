#include "CommunityMember.h"
#include "Alumnus.h"
#include<iostream>

using namespace std;
Alumnus::Alumnus(void)
{
}

Alumnus::Alumnus(unsigned long int ID, string Fname, string Lname, string Address,
	unsigned  int Cell, unsigned int YOG,string CJ) : CommunityMember(ID, Fname, Lname, Address, Cell)
{
	YearOfGraduation = YOG;
	CurrentJob = CJ;
}


Alumnus::~Alumnus(void)
{
}

void Alumnus::setYearOfGraduation(unsigned int YOG)
{
	YearOfGraduation = YOG;
}
void Alumnus::setCurrentJob(string CJ) {
	CurrentJob = CJ;
}
string Alumnus::getCurrentJob() {
	return CurrentJob;
}
unsigned int Alumnus::getYearOfGraduation()
{
	return YearOfGraduation;
}
void Alumnus::Alumnus::print()
{
	CommunityMember::print();	// prints all 5 data members
	cout << "Year of graduation : " << YearOfGraduation << endl
		<< "Current job : " << CurrentJob << endl;

}

void Alumnus::setAll(unsigned long int ID, string Fname, string Lname, string Address, unsigned long int Cell, unsigned int YOG, string CJ)
{
	CommunityMember::setAll(ID, Fname, Lname, Address, Cell);

	YearOfGraduation = YOG;
	CurrentJob = CJ;
}

void Alumnus::Alumnus::ReadData() {
	CommunityMember::ReadData();
	cout << "enter Year of graduation : ";
	cin >> YearOfGraduation;
	cout << "enter Current job : ";
	cin >> CurrentJob;
}
