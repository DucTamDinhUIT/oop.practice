#pragma once
#include "CCongNhat.h"
#include "CSanXuat.h"
#include "CQuanLy.h"
#include <vector>
class CongTy
{
private:
	vector <CQuanLy> NVQuanLy;
	vector <CSanXuat> NVSanXuat;
	vector <CCongNhat> NVCongNhat;

public:
	void Nhap();
	void Xuat();
	void TinhLuong();

};

