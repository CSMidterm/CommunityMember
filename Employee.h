#pragma once
#include<string>
#include"CommunityMember.h"

using namespace std;

class Employee : public CommunityMember
{
public:
	Employee();
	Employee(unsigned long int, string, string, string, unsigned long int,
		double);
	~Employee();

	void setSalary(double);
	

	double getSalary();
	

	void print();
	void setAll(unsigned long int, string, string, string, unsigned long int,
		double);
	void ReadData();
protected:
	double salary;
	
};
