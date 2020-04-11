#pragma once
#include<string>
#include"CommunityMember.h"

using namespace std;

class Employee : public CommunityMember
{
public:
	Employee();
	Employee(unsigned long int, string, string, string, unsigned long int,
		float, string);
	~Employee();

	void setSalary(float);
	void setDept(string);

	float getSalary();
	string getDept();

	void print();
	void setAll(unsigned long int, string, string, string, unsigned long int,
		float, string);

protected:
	float salary;
	string dept;
};
