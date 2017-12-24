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

void Sum(PhanSo phansoA , PhanSo phansoB, PhanSo &phansoC)
{
	phansoC.Tu = phansoA.Tu*phansoB.Mau - phansoB.Tu*phansoA.Mau;
	phansoC.Mau = phansoA.Mau*phansoB.Mau;
}

int Check (PhanSo phansoC)
{
	if (phansoC.Mau == 0)
		return 2;
	else
	{
		if (phansoC.Tu < 0)
			return -1;
		else if (phansoC.Tu > 0)
			return 1;
		else
			return 0;
	}
}

int main()
{
	PhanSo phansoA , phansoB, phansoC;
	cout<<"Nhap tu so cho phan so A: ";
	cin>>phansoA.Tu;
	cout<<"Nhap mau so cho phan so A: ";
	cin>>phansoA.Mau;
	cout<<"Nhap tu so cho phan so B: ";
	cin>>phansoB.Tu;
	cout<<"Nhap mau so cho phan so B: ";
	cin>>phansoB.Mau;
	Sum(phansoA,phansoB,phansoC);
	switch(Check(phansoC))
	{
		case -1:
			cout<<"Phan so A be hon phan so B.";
			break;
		case 1:
			cout<<"Phan so A lon hon phan so B.";
			break;
		case 0:
			cout<<"Hai phan so bang nhau";
			break;
		case 2:
			cout<<"Phan so khong phu hop";
			break;
	}
	return 0;
}