#pragma once
#include "CommunityMember.h"
using namespace std;
class Alumnus : public CommunityMember
{
public:
	Alumnus();
	Alumnus(unsigned long int, string, string, string, unsigned  int,
		unsigned int,string );
	~Alumnus();

	void setCurrentJob(string);
	string getCurrentJob();
	void setYearOfGraduation(unsigned int);
	unsigned int getYearOfGraduation();
	void  print();

	void setAll(unsigned long int, string, string, string, unsigned long int,
		unsigned int, string);
	void ReadData();
private:
	unsigned int YearOfGraduation;
	string CurrentJob;
};

