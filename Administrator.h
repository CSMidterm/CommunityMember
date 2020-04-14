#pragma once
#include "Faculty.h"
class Administrator : public Faculty
{
public:
	Administrator();
	~Administrator();

	Administrator(unsigned long int, string, string, string, unsigned long int,
		double,
		string, string,
		string);

	void setPosition(string);
	string getPosition();

	void print();

	void setAll(unsigned long int, string, string, string, unsigned long int,
		double,
		string, string,
		string);
	void ReadData();
protected:
	string Position;
};

