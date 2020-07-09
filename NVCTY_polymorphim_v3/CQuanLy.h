#pragma once
#include "CNhanVien.h"
class CQuanLy :
	public CNhanVien
{
private:
	float luongCoBan;
	long heSoLuong;
public:

	void Nhap();
	void Xuat();
	float TinhLuong();
};

