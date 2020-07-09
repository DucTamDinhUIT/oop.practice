#pragma once
#include "CNhanVien.h"


class CSanXuat :
	public CNhanVien
{
private:
	int		iSoSP;
public:
	void Nhap();
	void Xuat();
	float TinhLuong();

};

