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
	if (phansoC.Mau/(GDC(phansoC.Tu,phansoC.Mau)) > 1)
		cout<<"Hieu 2 Phan so da rut gon la: "<<phansoC.Tu/(GDC(phansoC.Tu,phansoC.Mau))<<"/"<<phansoC.Mau/(GDC(phansoC.Tu,phansoC.Mau));
	else if (phansoC.Mau/(GDC(phansoC.Tu,phansoC.Mau)) == 1)
		cout<<"Hieu 2 Phan so da rut gon la: "<<phansoC.Tu/(GDC(phansoC.Tu,phansoC.Mau));
	else
		cout<<"Phan so khong phu hop";
	return 0;
}