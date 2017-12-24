#include <iostream>
using namespace std;

struct PhanSo
{
	int Tu;
	int Mau;
};

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

int main()
{
	PhanSo phansoA;
	cout<<"Nhap tu so cho phan so A: ";
	cin>>phansoA.Tu;
	cout<<"Nhap mau so cho phan so A: ";
	cin>>phansoA.Mau;
	if (phansoA.Mau == 0)
		cout<<"Phan so khong phu hop";
	else if ((GDC(phansoA.Tu,phansoA.Mau)) > 1)
		cout<<"Phan so khong toi gian";
	else if (phansoA.Mau/(GDC(phansoA.Tu,phansoA.Mau)) == 1)
		cout<<"Phan so toi gian";
	return 0;
}