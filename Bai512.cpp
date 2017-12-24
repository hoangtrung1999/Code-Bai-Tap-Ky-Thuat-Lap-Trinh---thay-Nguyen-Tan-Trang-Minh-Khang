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

void QD(PhanSo &phansoA , PhanSo &phansoB)
{
	int x = phansoA.Mau;
	phansoA.Tu = phansoA.Tu*phansoB.Mau;
	phansoA.Mau = phansoA.Mau*phansoB.Mau;
	phansoB.Tu = x*phansoB.Tu;
	phansoB.Mau = x*phansoB.Mau;
}


int main()
{
	PhanSo phansoA , phansoB;
	cout<<"Nhap tu so cho phan so A: ";
	cin>>phansoA.Tu;
	cout<<"Nhap mau so cho phan so A: ";
	cin>>phansoA.Mau;
	cout<<"Nhap tu so cho phan so B: ";
	cin>>phansoB.Tu;
	cout<<"Nhap mau so cho phan so B: ";
	cin>>phansoB.Mau;
	QD(phansoA,phansoB);
	if (phansoA.Mau == 0 || phansoB.Mau == 0)
		cout<<"Phan so khong phu hop";
	else
	{
		cout<<"Phan tu A sau khi quy dong la: "<<phansoA.Tu<<"/"<<phansoA.Mau<<endl;
		cout<<"Phan tu B sau khi quy dong la: "<<phansoB.Tu<<"/"<<phansoB.Mau;
	}
	return 0;
}