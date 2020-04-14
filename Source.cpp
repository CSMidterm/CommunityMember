/*#include "Alumnus.h"
#include "Administrator.h"
#include "Staff.h"
#include "Teacher.h"
#include "Student.h"

int main()
{
	
	//object of Employee class
	Employee emp;
	//read employee details
	emp.ReadData();

	//write object into the file
	fstream file;
	file.open("Com.dat", ios::out | ios::binary);
	if (!file) {
		cout << "Error in creating file...\n";
		return -1;
	}

	file.write((char*)&emp, sizeof(emp));
	file.close();
	cout << "Date saved into file the file.\n";

	//open file again 
	file.open("Com.dat", ios::in | ios::binary);
	if (!file) {
		cout << "Error in opening file...\n";
		return -1;
	}

	if (file.read((char*)&emp, sizeof(emp))) {
		cout << endl << endl;
		cout << "Data extracted from file..\n";
		//print the object
		emp.print();
	}
	else {
		cout << "Error in reading data from file...\n";
		return -1;
	}

	file.close();
	return 0;
	
	/*Teacher OT;
	Administrator OA;
	Staff OS;
	Student OST;
	Alumnus OAL;
	ofstream Test("Community.dat", ios::app | ios::binary);
	int x;
	cout << "Choose: /n1-Teacher /n2-Administrator /n3-Staff /n4-Student /5-Alumnus"<<endl;
	cin >> x;
	switch (x)
	{
	case 1:
	
		OT.ReadData();
		

		break;
	case 2:
		OA.ReadData();
		
		break;
	case 3:
		OS.ReadData();
		break;
	case 4:
		OST.ReadData();
		break;
	case 5:
		OAL.ReadData();
		break;
	default:
		cout << "Choose a correct number: " << endl;
		break;
	}
	
	ofstream Community("Community.dat", ios::app | ios::binary);
    
	if (Community.is_open())
	{
		for (int i = 0; i < 5; i++)
		{
			if(x=1)
			{
				Community.write(reinterpret_cast<char*>(&OT),sizeof(OT));
			}
		}
	}
	Community.close();*/
	Student o1;
	
	cout << "enter data: " << endl;
	o1.ReadData();
	fstream Com("pop.txt", ios::app | ios::binary | ios::out |ios::in);
	Com.write((char*)&o1, sizeof(o1));
	
	Com.read((char*)&o1,sizeof(o1));
	string line;
	o1.print();
	/*if (Com.is_open())
	{
		while (getline(Com, line))
		{
			cout << line << "/n";
		}
		Com.close();
	}
	else
		cout << "error";*/
	Com.close();
	system("pause");*/
}