#include <iostream>
#include <string>
using namespace std;

struct PhanSo {
	int tu;
	int mau;
};
PhanSo cong(const PhanSo& ps1, const PhanSo& ps2) {
	PhanSo kq;
	kq.tu = (ps1.tu * ps2.mau) + (ps1.mau *ps2.tu);
	kq.mau = ps1.mau * ps2.mau;
	return kq;
}

PhanSo congDS(const PhanSo* dsPs, int size) {
	PhanSo kq;
	kq.tu = 0;
	kq.mau = 1;
	//thuc hien cong n phan so
	for (int i = 0; i < size; i++)
	{
		kq = cong(kq, dsPs[i]);
	}
	return kq;
}
PhanSo tru(const PhanSo& ps1, const PhanSo& ps2) {
	PhanSo kq;
	kq.tu = (ps1.tu * ps2.mau) - (ps1.mau *ps2.tu);
	kq.mau = ps1.mau * ps2.mau;
	return kq;
}

PhanSo truDS(const PhanSo* dsPs, int size) {
	PhanSo kq;
	kq.tu = 0;
	kq.mau = 1;
	//thuc hien cong n phan so
	for (int i = 0; i < size; i++)
	{
		kq = tru(kq, dsPs[i]);
	}
	return kq;
}
PhanSo nhan(const PhanSo& ps1, const PhanSo& ps2) {
	PhanSo kq;
	kq.tu = ps1.tu * ps2.tu;
	kq.mau = ps1.mau * ps2.mau;
	return kq;
}

PhanSo nhanDS(const PhanSo* dsPs, int size) {
	PhanSo kq;
	kq.tu = 0;
	kq.mau = 1;
	//thuc hien cong n phan so
	for (int i = 0; i < size; i++)
	{
		kq = nhan(kq, dsPs[i]);
	}
	return kq;
}
PhanSo chia(const PhanSo& ps1, const PhanSo& ps2) {
	PhanSo kq;
	kq.tu = ps1.tu * ps2.mau;
	kq.mau = ps1.mau * ps2.tu;
	return kq;
}

PhanSo chiaDS(const PhanSo* dsPs, int size) {
	PhanSo kq;
	kq.tu = 0;
	kq.mau = 1;
	//thuc hien cong n phan so
	for (int i = 0; i < size; i++)
	{
		kq = chia(kq, dsPs[i]);
	}
	return kq;
}


int main(int argc, char** argv) {

	// argc : argument count
	// argv: argument vector
	// Xử lý các đối số truyền vào
	// + Lấy được chuỗi tham số người dùng truyền chương trình
	//int main(int argc, char** argv)


	// + Phân tách chuối tham số thành 2 phần:
	//     ++ chuỗi hành động: add, sub, mul, div
	//string actionStr = argv[];
	string actStrg = argv[1];
	for (int i = 0; i < argc; i++)
	{
		cout << argv[i] << endl;

	}
	//test cut opcode//
	//cout << "phep toan la: " << actStrg << endl; 
	string *psStrList = new string[argc - 2];
	for (size_t i = 0; i < argc - 2; i++)
	{
		psStrList[i] = argv[i + 2];
		cout << psStrList[i] << endl;
	}

	if (actStrg == "add") {
		//thuc hien hanh dong add cho danh sach psList
		cout << "Cong" << endl;

		PhanSo *psList = new PhanSo[argc - 2];
		for (int i = 0; i < (argc - 2); i++)
		{

			// voi moi phan tu so trong psStrList se tao 1 bien kieu PhanSo
			//"1/2" --> tach tu, mau ve 2 so
			// xac dinh vi tri cua dau "/" "1/2"
			string strPs = psStrList[i].find('/');
			size_t pos = strPs.find('/');
			// cat chuoi 0--> truoc dau "/" tao ra tu so
			string strTu = strPs.substr(0, pos);
			// cat chuoi "/"+1 --> het chuoi tao ra mau so
			string strMau = strPs.substr(pos + 1, strPs.length() - pos - 1);

			int tu, mau;
			tu = stoi(strTu);
			mau = stoi(strMau);
			PhanSo ps;//gia su day la phan so hop le khi chuyen psStrList[i] sang phanso
			ps.tu = tu;
			ps.mau = mau;
			psList[i] = ps;

		}
		//thuc hien phep toan tren danh sach phan so
		PhanSo kq = congDS(psList, argc - 2);
	}
	if (actStrg == "sub") {
		//thuc hien hanh dong sub cho danh sach psList
		cout << "Tru" << endl;
		PhanSo *psList = new PhanSo[argc - 2];
		for (int i = 0; i < argc - 2; i++)
		{

			// voi moi phan tu so trong psStrList se tao 1 bien kieu PhanSo
			//"1/2" --> tach tu, mau ve 2 so
			// xac dinh vi tri cua dau "/" "1/2"
			string strPs = psStrList[i].find('/');
			size_t pos = strPs.find('/');
			// cat chuoi 0--> truoc dau "/" tao ra tu so
			string strTu = strPs.substr(0, pos);
			// cat chuoi "/"+1 --> het chuoi tao ra mau so
			string strMau = strPs.substr(pos + 1, strPs.length() - pos - 1);

			int tu, mau;
			tu = stoi(strTu);
			mau = stoi(strMau);
			PhanSo ps;//gia su day la phan so hop le khi chuyen psStrList[i] sang phanso
			ps.tu = tu;
			ps.mau = mau;
			psList[i] = ps;
		}
		PhanSo kq = truDS(psList, argc - 2);
	}
	if (actStrg == "mul") {
		//thuc hien hanh dong mul cho danh sach psList
		cout << "Nhan" << endl;
		PhanSo *psList = new PhanSo[argc - 2];
		for (int i = 0; i < argc - 2; i++)
		{

			// voi moi phan tu so trong psStrList se tao 1 bien kieu PhanSo
			//"1/2" --> tach tu, mau ve 2 so
			// xac dinh vi tri cua dau "/" "1/2"
			string strPs = psStrList[i].find('/');
			size_t pos = strPs.find('/');
			// cat chuoi 0--> truoc dau "/" tao ra tu so
			string strTu = strPs.substr(0, pos);
			// cat chuoi "/"+1 --> het chuoi tao ra mau so
			string strMau = strPs.substr(pos + 1, strPs.length() - pos - 1);

			int tu, mau;
			tu = stoi(strTu);
			mau = stoi(strMau);
			PhanSo ps;//gia su day la phan so hop le khi chuyen psStrList[i] sang phanso
			ps.tu = tu;
			ps.mau = mau;
			psList[i] = ps;
		}
		PhanSo kq = nhanDS(psList, argc - 2);
	}
	if (actStrg == "div") {
		//thuc hien hanh dong div cho danh sach psList
		cout << "Chia" << endl;
		PhanSo *psList = new PhanSo[argc - 2];
		for (int i = 0; i < argc - 2; i++)
		{

			// voi moi phan tu so trong psStrList se tao 1 bien kieu PhanSo
			//"1/2" --> tach tu, mau ve 2 so
			// xac dinh vi tri cua dau "/" "1/2"
			string strPs = psStrList[i].find('/');
			size_t pos = strPs.find('/');
			// cat chuoi 0--> truoc dau "/" tao ra tu so
			string strTu = strPs.substr(0, pos);
			// cat chuoi "/"+1 --> het chuoi tao ra mau so
			string strMau = strPs.substr(pos + 1, strPs.length() - pos - 1);

			int tu, mau;
			tu = stoi(strTu);
			mau = stoi(strMau);
			PhanSo ps;//gia su day la phan so hop le khi chuyen psStrList[i] sang phanso
			ps.tu = tu;
			ps.mau = mau;
			psList[i] = ps;
		}
		PhanSo kq = chiaDS(psList, argc - 2);
	}

	return 0;
}