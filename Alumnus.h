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
	void setYOG(unsigned int);
	unsigned int getYOG();
	void  print();
private:
	unsigned int yog;
	string CurrentJob;
};

