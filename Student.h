#pragma once
#include"CommunityMember.h"

class Student : public CommunityMember
{
public:
	Student();
	Student(unsigned long int, string, string, string, unsigned long int,
		float,unsigned int);
	~Student();

	void setGPA(float);
	float getGPA();

	void setCourseLoadHours(unsigned int);
	unsigned int getCourseLoadHours();

	void print();

	void setAll(unsigned long int, string, string, string, unsigned long int
	,float,unsigned int);

	void ReadData();
protected:
	float gpa;
	unsigned int CourseLoadHours;
};