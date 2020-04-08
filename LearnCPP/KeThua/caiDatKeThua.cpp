#include <iostream>
#include <string>

using namespace std;

class Nguoi
{
    int namSinh;
    string Ten;
public:
	Nguoi(){}
	Nguoi(int namsinh, string ten)
	{
		namSinh = namsinh;
		Ten = ten;
	}
	void An()
	{
		cout << Ten << " an 2kg gao";
	}
	void Xuat()
	{
		cout << "\n Nguoi " << Ten;
		cout << "\n Nam sinh = " << namSinh << endl;
	}
};

class SinhVien : public Nguoi
{
	string MSSV;
public:
	SinhVien(){}
	SinhVien(int namsinh, string ten, string mssv) : Nguoi(namsinh, ten)
	{
		MSSV = mssv;
	}
	void Xuat()
	{
		//cout << "\n Nguoi" << Ten;
		//cout << "\n Nam sinh = " << namSinh << endl;
		cout << "\n mssv = " << MSSV;
	}

};

int main()
{
	//Nguoi N(1997, "Son");
	//N.An();
	SinhVien sv(1997, "Son", "20153184");
	sv.An();
	return 0;
}

