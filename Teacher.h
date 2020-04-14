#pragma once
#include "Faculty.h"
class Teacher :public Faculty
{
public:
	Teacher();
	~Teacher();

	Teacher(unsigned long int, string, string, string, unsigned long int,
		double,
		string, string,
		unsigned int);

	void setHoursPerWeek(unsigned int);
	unsigned int getHoursPerWeek();

	void print();

	void setAll(unsigned long int, string, string, string, unsigned long int,
		double,
		string, string,
		unsigned int);
	void ReadData();
protected:
	unsigned int HoursPerWeek;
};

