#include "CCongNhat.h"

void CCongNhat::Nhap()
{
	CNhanVien::Nhap();
	cout << "So ngay lam viec: ";
	cin >> iNgayLV;
}
void CCongNhat::Xuat()
{
	CNhanVien::Xuat();
	cout << "So ngay lam viec: " << iNgayLV << endl;
}
float CCongNhat::TinhLuong()
{
	return (fLuong = this->iNgayLV * 500.000);
}