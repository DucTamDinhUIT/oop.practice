#pragma once
#include <iostream>
#include "CHAR.h"
using namespace std;
class STRING
{
private:
	CHAR * content;
	int length;
public:

	STRING();
	~STRING();
	STRING(CHAR x);
	CHAR getContent();
	int expand();
	int remove();
	int input();

};

