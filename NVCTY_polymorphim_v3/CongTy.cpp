#include "CongTy.h"

void CongTy::TinhLuong()
{
	for (int i = 0; i < this->NV.size(); i++)
		this->NV.at(i)->TinhLuong();
}

void CongTy::Nhap()
{
	cout << "Nhap tong so nhan vien: ";
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhan vien van phong (1), nhan vien san xuat (2): ";
		int k;
		cin >> k;
		CNhanVien *nv;
		// Tùy vào người dùng chọn đối tượng nào để nhập
		switch (k)
		{
		case 1:
			nv = new CQuanLy;
			break;
		case 2:
			nv = new CSanXuat;
			break;
		case 3:
			nv = new CCongNhat;
			break;
		}
		nv->Nhap(); // ta sẽ sử dụng hàm nhập của đối tượng mà người dùng chọn
		this->NV.push_back(nv);

	}
}

void CongTy::Xuat()
{
	cout << "Nhan vien cong ty:" << endl;
	for (int i = 0; i < this->NV.size(); i++)
	{
		cout << "STT:" << i + 1 << endl;
		this->NV.at(i)->Xuat(); 
		// tùy vào đối tượng là gì mà phương thức xuất sẽ được gọi theo đúng đối tượng đó
	}
}
