#pragma once
#include "Human.h"
#include <iostream>
#include <string>
using namespace std;

class Student :
	public Human
{
public:
	Student(string n) : Human(n) {};
	int getAge();
	void namSinh(void);

};

