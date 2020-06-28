#include "Student.h"

int Student::getAge()
{
	cout << "nhap vao so tuoi: ";
	cin >> born;
	return born;
}
void Student::namSinh(void)
{
	cout << Name << "says: " << getAge() << endl;
}