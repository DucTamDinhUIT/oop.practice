#include "CongTy.h"

void CongTy::TinhLuong()
{
	for (int i = 0; i < this->NVQuanLy.size(); i++)
		this->NVQuanLy.at(i).TinhLuong();
	for (int i = 0; i < this->NVSanXuat.size(); i++)
		this->NVSanXuat.at(i).TinhLuong();
	for (int i = 0; i < this->NVCongNhat.size(); i++)
		this->NVCongNhat.at(i).TinhLuong();
}

void CongTy::Nhap()
{
	cout << "Nhap so nhan vien quan ly: ";
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		CQuanLy ql;
		ql.Nhap();
		this->NVQuanLy.push_back(ql);
	}

	cout << "Nhap so nhan vien san xuat: ";
	int m;
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		CSanXuat sx;
		sx.Nhap();
		this->NVSanXuat.push_back(sx);
	}

	cout << "Nhap so nhan vien cong nhat: ";
	int k;
	cin >> k;
	for (int i = 0; i < m; i++)
	{
		CCongNhat cn;
		cn.Nhap();
		this->NVCongNhat.push_back(cn);
	}
}

void CongTy::Xuat()
{
	cout << "Nhan vien quan ly:" << endl;
	for (int i = 0; i < this->NVQuanLy.size(); i++)
	{
		cout << "STT:" << i + 1 << endl;
		this->NVQuanLy.at(i).Xuat();
	}

	cout << "Nhan vien san xuat:" << endl;
	for (int i = 0; i < this->NVSanXuat.size(); i++)
	{
		cout << "STT:" << i + 1 << endl;
		this->NVSanXuat.at(i).Xuat();
	}
	cout << "Nhan vien cong nhat:" << endl;
	for (int i = 0; i < this->NVCongNhat.size(); i++)
	{
		cout << "STT:" << i + 1 << endl;
		this->NVCongNhat.at(i).Xuat();
	}
}
