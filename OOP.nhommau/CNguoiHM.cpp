#include "CNguoiHM.h"

void CNguoiHM::kiemtra()
{
	for (int i = 0; i < this->HienmauA.size(); i++)
		this->HienmauA.at(i).kiemtra();
	for (int i = 0; i < this->HienmauB.size(); i++)
		this->HienmauB.at(i).kiemtra();
	for (int i = 0; i < this->HienmauAB.size(); i++)
		this->HienmauAB.at(i).kiemtra();
	for (int i = 0; i < this->HienmauO.size(); i++)
		this->HienmauO.at(i).kiemtra();
}

void CNguoiHM::set()
{
	cout << "Nhap nguoi co nhom mau A: ";
	int m;
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		CMauA a;
		a.set();
		this->HienmauA.push_back(a);
	}

	cout << "Nhap nguoi co nhom mau B: ";
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		CMauB b;
		b.set();
		this->HienmauB.push_back(b);
	}

	cout << "Nhap nguoi co nhom mau AB: ";
	int o;
	cin >> o;
	for (int i = 0; i < o; i++)
	{
		CMauAB ab;
		ab.set();
		this->HienmauAB.push_back(ab);
	}

	cout << "Nhap nguoi co nhom mau O: ";
	int p;
	cin >> p;
	for (int i = 0; i < p; i++)
	{
		CMauO o;
		o.set();
		this->HienmauO.push_back(o);
	}
}

void CNguoiHM::get()
{
	cout << "Nguoi co nhom mau A: " << endl;
	for (int i = 0; i < this->HienmauA.size(); i++)
	{
		cout << "STT:" << i + 1 << endl;
		this->HienmauA.at(i).get();
	}

	cout << "Nguoi co nhom mau B: " << endl;
	for (int i = 0; i < this->HienmauB.size(); i++)
	{
		cout << "STT:" << i + 1 << endl;
		this->HienmauB.at(i).get();
	}
	cout << "Nguoi co nhom mau AB: " << endl;
	for (int i = 0; i < this->HienmauAB.size(); i++)
	{
		cout << "STT:" << i + 1 << endl;
		this->HienmauAB.at(i).get();
	}
	cout << "Nguoi co nhom mau O: " << endl;
	for (int i = 0; i < this->HienmauO.size(); i++)
	{
		cout << "STT:" << i + 1 << endl;
		this->HienmauO.at(i).get();
	}
}
