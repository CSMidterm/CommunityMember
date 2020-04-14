#pragma once
#include<string>
#include<iostream>
#include<fstream>
using namespace std;

class CommunityMember
{
public:
	CommunityMember();
	CommunityMember(unsigned long int, string, string, string, unsigned long int);
	~CommunityMember();

	void setFname(string);
	void setLname(string);
	void setID(unsigned long int);
	void setAddress(string);
	void setCell(unsigned long int);

	string getFname();
	string getLname();
	unsigned long int getID();
	string getAddress();
	unsigned long int getCell();

	void setAll(unsigned long int, string, string, string, unsigned long int);
	void print();

	void ReadData();

protected:
	string fname, lname, address;
	unsigned long int id, cell;
};