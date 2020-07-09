#pragma once
#include <iostream>
#include <string>
using namespace std;

class CNhanVien
{
protected:
	string stHoTen;
	string stNgaySinh;
	string stDiaChi;
	float fLuong;
public:
	virtual void Nhap();
	virtual void Xuat();
	float TinhLuong();
	CNhanVien();
	~CNhanVien();

};

