#include"Student.h"
#include"Administrator.h"
#include"Alumnus.h"
#include"Staff.h"
#include"Teacher.h"

int main() {
	int n,CM=0;
	string line;
	fstream file;
	for (int i = 1; i == 1;CM++) {
		
		
	a:
		cout << "Enter the type of the community member type: \n1 for CommunityMember\n2 for alumnus\n3 for student\n4 for employee\n5 for staff\n6 for faculty\n7 for teacher\n8 for administrator\n";
		cin >> n;
		if (n == 1) {
			CommunityMember CM;
			CM.ReadData();
			file.open("Com.dat", ios::app | ios::in | ios::out | ios::binary);
			if (!file) {
				cout << "Error in creating file...\n";
				return -1;
			}
			file.write(reinterpret_cast<char*>(&CM), sizeof(CM));
			file.close();
			
		}
		else if (n == 2) {
			Alumnus CM;
			CM.ReadData();
			file.open("Com.dat", ios::app | ios::in | ios::out | ios::binary);
			if (!file) {
				cout << "Error in creating file...\n";
				return -1;
			}
			file.write(reinterpret_cast<char*>(&CM), sizeof(CM));
			file.close();
		}
		else if (n == 3) {
			Student CM;
			CM.ReadData();
			file.open("Com.dat", ios::app | ios::in | ios::out | ios::binary);
			if (!file) {
				cout << "Error in creating file...\n";
				return -1;
			}
			file.write(reinterpret_cast<char*>(&CM), sizeof(CM));
			file.close();
		}
		else if (n == 4) {
			Employee CM;
			CM.ReadData();
			file.open("Com.dat", ios::app | ios::in | ios::out | ios::binary);
			if (!file) {
				cout << "Error in creating file...\n";
				return -1;
			}
			file.write(reinterpret_cast<char*>(&CM), sizeof(CM));
			file.close();
		}
		else if (n == 5) {
			Staff CM;
			CM.ReadData();
			file.open("Com.dat", ios::app | ios::in | ios::out | ios::binary);
			if (!file) {
				cout << "Error in creating file...\n";
				return -1;
			}
			file.write(reinterpret_cast<char*>(&CM), sizeof(CM));
			file.close();
		}
		else if (n == 6) {
			Faculty CM;
			CM.ReadData(); 
			file.open("Com.dat", ios::app | ios::in | ios::out | ios::binary);
			if (!file) {
				cout << "Error in creating file...\n";
				return -1;
			}
			file.write(reinterpret_cast<char*>(&CM), sizeof(CM));
			file.close();
		}
		else if (n == 7) {
			Teacher CM;
			CM.ReadData();
			file.open("Com.dat", ios::app | ios::in | ios::out | ios::binary);
			if (!file) {
				cout << "Error in creating file...\n";
				return -1;
			}
			file.write(reinterpret_cast<char*>(&CM), sizeof(CM));
			file.close();
		}
		else if (n == 8) {
			Administrator CM;
			CM.ReadData();
			file.open("Com.dat", ios::app | ios::in | ios::out | ios::binary);
			if (!file) {
				cout << "Error in creating file...\n";
				return -1;
			}
			file.write(reinterpret_cast<char*>(&CM), sizeof(CM));
			file.close();
		}
		else {
			cout << "error try again ):";
			goto a;
		}
		

		

		cout << "prase any key to exit : \nor 1 continue";
		cin >> i;
	}

}
