#include "CSanXuat.h"


void CSanXuat::Nhap()
{
	CNhanVien::Nhap();
	cout << "So san pham: ";
	cin >> this->iSoSP;
}

void CSanXuat::Xuat()
{
	CNhanVien::Xuat();
	cout << "So san pham: " << this->iSoSP << endl;
}
float CSanXuat::TinhLuong()
{
	return (fLuong = this->iSoSP * 5000);
}
