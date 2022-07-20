#include <iostream>
#include <string.h>
using namespace std;

class Student
{
private:
	short rollNo;
	char name[10];
	class Address
	{
	private:
		short houseNo;
		char colony[20];
		char district[20];
		char state[20];
		char pinCode[20];

	public:
		void setAdd(short hoNo, char *col, char *dist, char *st, char *pin)
		{
			houseNo = hoNo;
			strcpy(colony, col);
			strcpy(district, dist);
			strcpy(state, st);
			strcpy(pinCode, pin);
		}
		void showAdd()
		{
			cout << houseNo << " ";
			cout << colony << " ";
			cout << district << " ";
			cout << state << " ";
			cout << pinCode << " " << endl;
		}
	};
	Address add;

public:
	void setAddress(short rollN, char *nme, short hoNo, char *col, char *dist, char *st, char *pin)
	{
		rollNo = rollN;
		strcpy(name, nme);
		add.setAdd(hoNo, col, dist, st, pin);
	}
	void showData()
	{
		cout << rollNo << " ";
		cout << name << " " << endl;
		add.showAdd();
	}
};

int main()
{
	// your code goes here
	Student st1;
	st1.setAddress(5001, "Prince", 201, "NathNagar", "Deoria", "UP", "274001");
	st1.showData();
}