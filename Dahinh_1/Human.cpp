#include "Human.h"

/*
Human::Human(string n)
{
	n = name;
}

Human::~Human()
{
}

void Human::getTuoi(int m)
{
	m = born;
}

void Human::getInfo()
{
	int birth;
	birth = 2020 - born;
	cout << "Nguoi " << name << "co so tuoi la " << birth << endl;
}

void Human::nhap()
{
	cin >> name;
	cin >> born;
}

void Human::xuat()
{
	cout << name << endl;
	cout << born << endl;
}
*/

Human::Human(string n)
{
	Name = n;
}

int Human::getAge()
{
	cout << "nhap vao so tuoi: ";
	cin >> born;
	return born;
}

void Human::namSinh(void)
{
	cout << Name << "co so tuoi la: " << getAge() << endl;
}
