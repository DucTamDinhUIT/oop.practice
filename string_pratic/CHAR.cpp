#include "CHAR.h"
CHAR::CHAR()
{
	content = 'e';
};
CHAR::~CHAR(){};

CHAR::CHAR(char x)
{
	content = x;
};
char CHAR::getContent()
{
	cout << "Ky tu la: "<< content;
	return 0;
};

