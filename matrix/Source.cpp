#include "Matrix.h"
#include <iostream>
using namespace std;

int main()
{
	Matrix a, b;
	cin >> a;
	cout << a;
	cin >> b;
	cout << b;
	a = a + b;
	cout << a;
	a = a - b;
	cout << a;
	a = a * b;
	cout << a;
	a = a / b;
	cout << a;
}