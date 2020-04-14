#pragma once

#include"Employee.h"

class Faculty : public Employee
{
public:
	Faculty();
	~Faculty();
	Faculty(unsigned long int, string, string, string, unsigned long int,
		double, 
		string,string);

	void setSpeciality(string);
	string getSpeciality();
	void setAcademicRank(string);
	string getAcademicRank();

	void setAll(unsigned long int, string, string, string, unsigned long int,
		double,
		string,string);

	void print();
	void ReadData();

protected:
	string specility,AcademicRank;
};
