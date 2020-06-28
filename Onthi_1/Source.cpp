#include "CNhanVien.h"
#include "CCongNhat.h"
#include "CSanXuat.h"
#include "CQuanLy.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char **argv)
{

	CQuanLy ql;
	ql.Nhap();
	ql.TinhLuong();
	ql.Xuat();

	CSanXuat sx;
	sx.Nhap();
	sx.TinhLuong();
	sx.Xuat();

	CCongNhat vp;
	vp.Nhap();
	vp.TinhLuong();
	vp.Xuat();

/*
	CongTy ct;
	ct.Nhap();
	ct.TinhLuong();
	ct.Xuat();
	return 0;
*/
}