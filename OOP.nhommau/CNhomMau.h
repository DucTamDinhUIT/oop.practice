#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class CNhomMau
{
protected:
	bool rh;
	string mau;
public:
	CNhomMau();
	~CNhomMau();
	virtual void set();
	virtual void get();
};

