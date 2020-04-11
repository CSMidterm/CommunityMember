#include "CommunityMember.h"

CommunityMember::CommunityMember(unsigned long int id, string fn, string ln, string ad, unsigned long int cp)
{
	ID = id;
	FirstName = fn;
	LastName = ln;
	Address = ad;
	CellPhone = cp;
}

void CommunityMember::setID(unsigned long int id)
{
	ID = id;
}

void CommunityMember::setFirstName(string fn)
{
	FirstName = fn;
}

void CommunityMember::setLastName(string ln)
{
	LastName = ln;
}

void CommunityMember::setAddress(string ad)
{
	Address = ad;
}

void CommunityMember::setCellPhone(unsigned long int cp)
{
	CellPhone = cp;
}

unsigned long int CommunityMember::getID()
{
	return ID;
}

string CommunityMember::getFirstName()
{
	return FirstName;
}

string CommunityMember::getLastName()
{
	return LastName;
}

string CommunityMember::getAddress()
{
	return Address;
}

unsigned long int CommunityMember::getCellPhone()
{
	return CellPhone;
}

void CommunityMember::print()
{
	cout << "ID: " << getID() << endl
		<< "First Name: " << getFirstName() << endl
		<< "Last Name: " << getLastName() << endl
		<< "Address: " << getAddress() << endl
		<< "CellPhone: " << getCellPhone() << endl;
}

int main()
{
	CommunityMember c1;
	c1.setFirstName("Ahmed");
	c1.getFirstName();
	c1.print();

}