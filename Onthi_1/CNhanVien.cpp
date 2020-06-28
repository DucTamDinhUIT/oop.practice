#include "CNhanVien.h"

CNhanVien::CNhanVien()
{
	this->stHoTen = "";
	this->stDiaChi = "";
	this->stNgaySinh = "";
}

CNhanVien::~CNhanVien()
{
}

void CNhanVien::Nhap()
{
	cout << "nhap ho ten: ";
	cin.ignore();
	getline(cin, this->stHoTen);
	cout << "nhap ngay sinh: ";
	cin >> stNgaySinh;
	cout << "nhap dia chi: ";
	cin >> stDiaChi;
}

void CNhanVien::Xuat()
{
	cout << "ho ten: " << this->stHoTen << endl;
	cout << "ngay sinh: " << this->stNgaySinh << endl;
	cout << "dia chi: " << this->stDiaChi << endl;
	cout << "luong la: " << this->fLuong << endl;
}

float CNhanVien::TinhLuong()
{
	return fLuong;
}
