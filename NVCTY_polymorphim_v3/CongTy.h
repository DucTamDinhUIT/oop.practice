#pragma once
#include "CCongNhat.h"
#include "CSanXuat.h"
#include "CQuanLy.h"
#include <vector>
class CongTy
{
private:
	//vector <CQuanLy> NVQuanLy;
	//vector <CSanXuat> NVSanXuat;
	//vector <CCongNhat> NVCongNhat;
	vector <CNhanVien *> NV;

public:
	virtual void Nhap();
	virtual void Xuat();
	virtual void TinhLuong();

};

