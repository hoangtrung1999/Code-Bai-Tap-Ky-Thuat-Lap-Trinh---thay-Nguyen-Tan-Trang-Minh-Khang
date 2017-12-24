#include <iostream>
using namespace std;

struct PhanSo
{
	int Tu;
	int Mau;
};

bool CheckPositive(PhanSo phanso)
{
	if (phanso.Mau*phanso.Tu > 0)
		return 1;
	return 0;
}

int main()
{
	PhanSo phanso;
	cout<<"Nhap tu so cho phan so: ";
	cin>>phanso.Tu;
	cout<<"Nhap mau so cho phan so: ";
	cin>>phanso.Mau;
	if (phanso.Mau == 0)
		cout<<"Phan so khong phu hop";
	else 
	{
		if (CheckPositive(phanso))
			cout<<"Phan so duong";
		else
			cout<<"Phan so am";
	}
	return 0;
}