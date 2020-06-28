#include "CQuanLy.h"

void CQuanLy::Nhap()
{
	CNhanVien::Nhap();
	cout << "Luong co ban: ";
	cin >> this->luongCoBan;
	cout << "He so luong: ";
	cin >> this->heSoLuong;
}

void CQuanLy::Xuat()
{
	CNhanVien::Xuat();
	cout << "Luong co ban: " <<  this->luongCoBan << endl;
	cout << "He so luong la: " << this->heSoLuong << endl;
}
float CQuanLy::TinhLuong()
{
	return (fLuong = this->luongCoBan * this->heSoLuong * 1000);
}
