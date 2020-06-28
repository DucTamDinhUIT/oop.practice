#pragma once
#include <iostream>
#include <string>
using namespace std;

class Human
{
protected:
	string Name;
	int born;
public:
	Human(string n);
	virtual int getAge();
	void namSinh(void);
};

