#include "CNhanVien.h"
#include "CCongNhat.h"
#include "CSanXuat.h"
#include "CQuanLy.h"
#include "CongTy.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char **argv)
{

	CongTy ct;
	ct.Nhap();
	ct.TinhLuong();
	ct.Xuat();
	return 0;
}