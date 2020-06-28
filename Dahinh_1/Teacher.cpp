#include "Teacher.h"

int Teacher::getAge()
{
	cout << "nhap vao so tuoi: ";
	cin >> born;
	return born;
}
void Teacher::namSinh(void)
{
	cout << Name << "co so tuoi la: " << getAge() << endl;
}