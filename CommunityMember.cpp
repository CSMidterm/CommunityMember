#include "CommunityMember.h"
#include <iostream>

using namespace std;

CommunityMember::CommunityMember()
{
}

CommunityMember::CommunityMember(unsigned long int ID, string Fname, string Lname,
	string Address, unsigned long int Cell)
{
	id = ID;
	fname = Fname;
	lname = Lname;
	address = Address;
	cell = Cell;
}


CommunityMember::~CommunityMember(void)
{
}

void CommunityMember::setFname(string Fname)
{
	fname = Fname;
}
void CommunityMember::setLname(string Lname)
{
	lname = Lname;
}
void CommunityMember::setID(unsigned long int ID)
{
	id = ID;
}
void CommunityMember::setAddress(string Address)
{
	address = Address;
}
void CommunityMember::setCell(unsigned long int Cell)
{
	cell = Cell;
}

string CommunityMember::getFname()
{
	return fname;
}
string CommunityMember::getLname()
{
	return lname;
}
unsigned long int CommunityMember::getID()
{
	return id;
}

string CommunityMember::getAddress()
{
	return address;
}
unsigned long int CommunityMember::getCell()
{
	return cell;
}

void CommunityMember::setAll(unsigned long int ID, string Fname, string Lname, string Address, unsigned long int Cell)
{
	id = ID;
	fname = Fname;
	lname = Lname;
	address = Address;
	cell = Cell;
}
void CommunityMember::print()
{
	cout << "ID: " << id << endl
		<< "First: " << fname << endl
		<< "Last: " << lname << endl
		<< "Address: " << address << endl
		<< "Cell: " << cell << endl;
}

void CommunityMember::ReadData()
{
	cout << "enter ID: ";
	cin >> id;
	cout << "enter Frist Name: ";
	cin >> fname;
	cout << "enter last name: ";
	cin >> lname;
	cout << "enter address: ";
	cin >> address;
	cout << "enter cell: ";
	cin >> cell;
}
