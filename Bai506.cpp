#include <iostream>
using namespace std;

int GDC (int a, int b)
{
	if (a == 0)
		return b;
	else if ( b == 0)
		return a;
	else
	{
		if ( a > b )
			GDC( a- b , b);
		else
			GDC ( a, b - a);
	}
}

struct PhanSo
{
	int Tu;
	int Mau;
};

int main()
{
	PhanSo phanso;
	cout<<"Nhap tu so cho phan so: ";
	cin>>phanso.Tu;
	cout<<"Nhap mau so cho phan so: ";
	cin>>phanso.Mau;
	if (phanso.Mau/(GDC(phanso.Tu,phanso.Mau)) > 1)
		cout<<"Phan so da rut gon la: "<<phanso.Tu/(GDC(phanso.Tu,phanso.Mau))<<"/"<<phanso.Mau/(GDC(phanso.Tu,phanso.Mau));
	else if (phanso.Mau/(GDC(phanso.Tu,phanso.Mau)) == 1)
		cout<<"Phan so da rut gon la: "<<phanso.Tu/(GDC(phanso.Tu,phanso.Mau));
	else
		cout<<"Phan so khong phu hop";
	return 0;
}