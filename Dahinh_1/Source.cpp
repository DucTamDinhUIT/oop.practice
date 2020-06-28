#include "Human.h"
#include "Student.h"
#include "Teacher.h"
#include <iostream>
#include <string>
using namespace std;

int main(void) {
	Human *firsti = new Teacher("Kitty");;
	firsti->namSinh();
	delete firsti;

	firsti = new Student("Doggie");
	firsti->namSinh();
	delete firsti;

	return 0;
}