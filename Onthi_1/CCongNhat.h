#pragma once
#include "CNhanVien.h"


class CCongNhat :
	public CNhanVien
{
private:
	int iNgayLV;
public:
	void Nhap();
	void Xuat();
	float TinhLuong();
};

