#include "Matrix.h"

Matrix::Matrix() 
{
	cols = 0;
	rows = 0;
};
Matrix::Matrix(const Matrix&x)
{
	cols = x.cols;
	rows = x.rows;
};
Matrix::Matrix(int, int)
{
	this->cols = cols;
	this->rows = rows;
};
Matrix::~Matrix() {};
istream& operator>>(istream &is, Matrix &x)
{
	is >> x.cols;
	is >> x.rows;
	return is;
};
ostream& operator<<(ostream &os, Matrix &y)
{
	os << y.cols;
	os << y.rows;
	return os;
};
Matrix Matrix::operator+ (Matrix b) const
{
	return Matrix(cols + b.cols, rows + b.rows);
};
Matrix Matrix::operator- (Matrix b) const
{
	return Matrix(cols - b.cols, rows - b.rows);
};
Matrix Matrix::operator* (Matrix b) const
{
	return Matrix(cols * b.cols, rows * b.rows);
};
Matrix Matrix::operator/ (Matrix b) const
{
	return Matrix(cols / b.cols, rows / b.rows);
}


