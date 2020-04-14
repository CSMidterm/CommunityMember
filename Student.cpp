
#include "Student.h"

Student::Student(void)
{
}

Student::Student(unsigned long int ID, string Fname, string Lname, string Address,
	unsigned long int Cell, float GPA,unsigned int CLH) : CommunityMember(ID, Fname, Lname, Address, Cell)
{
	gpa = GPA;
	CourseLoadHours = CLH;
}


Student::~Student(void)
{
}

void Student::setGPA(float GPA)
{
	gpa = GPA;
}

float Student::getGPA()
{
	return gpa;
}

void Student::setCourseLoadHours(unsigned int CLH)
{
	CourseLoadHours = CLH;
}

unsigned int Student::getCourseLoadHours()
{
	return CourseLoadHours;
}

void Student::print()
{
	CommunityMember::print();

	cout << "GPA: " << gpa << endl
		<< "CourseLoadHour: " << CourseLoadHours << endl;
}

void Student::setAll(unsigned long int ID, string Fname, string Lname, string Address, unsigned long int Cell, float GPA, unsigned int CLH)
{
	CommunityMember::setAll(ID, Fname, Lname, Address, Cell);

	gpa = GPA;
	CourseLoadHours = CLH;
}

void Student::Student::ReadData() {
	CommunityMember::ReadData();
	cout << "enter CourseLoadHours: ";
	cin >> CourseLoadHours;
	cin >> gpa;
}
