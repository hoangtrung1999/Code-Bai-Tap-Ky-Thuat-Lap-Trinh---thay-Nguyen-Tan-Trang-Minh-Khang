#include <iostream>
using namespace std;

struct PhanSo
{
	int Tu;
	int Mau;
};

void InputFraction (PhanSo &phanso)
{
	cout<<"Nhap tu so cho phan so: ";
	cin>>phanso.Tu;
	cout<<"Nhap mau so cho phan so: ";
	cin>>phanso.Mau;
}

void PrintFraction (PhanSo phanso)
{
	cout<<"Phan so co dang: "<<phanso.Tu<<"/"<<phanso.Mau;
}

int main()
{
	PhanSo phanso;
	InputFraction(phanso);
	PrintFraction(phanso);
	return 0;
}