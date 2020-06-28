#pragma once
#include <iostream>
using namespace std;

class Matrix
{
private:
	int ** values;
	int rows;
	int cols;
public:
	Matrix();
	Matrix(const Matrix&);
	Matrix(int, int);
	~Matrix();
	friend istream& operator>>(istream &, Matrix &);
	friend ostream& operator<<(ostream &, Matrix &);
	Matrix operator+(Matrix b) const;
	Matrix operator-(Matrix b) const;
	Matrix operator*(Matrix b) const;
	Matrix operator/(Matrix b) const;
};

