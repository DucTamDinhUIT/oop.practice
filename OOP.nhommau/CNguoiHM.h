#pragma once
#include "CMauA.h"
#include "CMauB.h"
#include "CMauAB.h"
#include "CMauO.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class CNguoiHM
{
private:
	vector <CMauA> HienmauA;
	vector <CMauB> HienmauB;
	vector <CMauAB> HienmauAB;
	vector <CMauO> HienmauO;

public:
	void set();
	void get();
	void kiemtra();

};

