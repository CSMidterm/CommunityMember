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
	yog = YOG;
	CurrentJob = CJ;
}


Alumnus::~Alumnus(void)
{
}

void Alumnus::setYOG(unsigned int YOG)
{
	yog = YOG;
}
void Alumnus::setCurrentJob(string CJ) {
	CurrentJob = CJ;
}
string Alumnus::getCurrentJob() {
	return CurrentJob;
}
unsigned int Alumnus::getYOG()
{
	return yog;
}
void Alumnus::Alumnus::print()
{
	CommunityMember::print();	// prints all 5 data members
	cout << "Year of graduation : " << yog << endl
		<< "Current job : " << CurrentJob << endl;

}

int main()
{
	CommunityMember c1();
	c1().setFirstName("Ahmed");
	c1().getFirstName();
	c1().print();

}
