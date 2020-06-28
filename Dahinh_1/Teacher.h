#pragma once
#include "Human.h"
#include <iostream>
#include <string>
using namespace std;

class Teacher :
	public Human
{
public:
	Teacher(string n) : Human(n) { };
	int getAge();
	void namSinh(void);
};

