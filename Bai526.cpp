#include <iostream>
using namespace std;

struct HonSo
{
	int PhanNguyen;
	int Tu;
	int Mau;
};

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
void PrintHS(HonSo hs, PhanSo ps)
{
	cout<<hs.PhanNguyen<<"/"<<"("<<ps.Tu/(GDC(ps.Tu,ps.Mau))<<"/"<<ps.Mau/(GDC(ps.Tu,ps.Mau))<<")";
}

HonSo Calculate(HonSo hs1 , HonSo hs2)
{
	HonSo hs;
	hs.PhanNguyen = hs1.PhanNguyen + hs2.PhanNguyen;
	hs.Tu = hs1.Tu*hs2.Mau + hs1.Mau*hs2.Tu;
	hs.Mau = hs1.Mau*hs2.Mau;
	return hs;
}

void InputHS (HonSo &hs)
{
	cout<<"Nhap phan nguyen: ";
	cin>>hs.PhanNguyen;
	cout<<"Nhap tu so: ";
	cin>>hs.Tu;
	cout<<"Nhap mau so: ";
	cin>>hs.Mau;
}



int main()
{	
	HonSo hs1, hs2 , hs;
	PhanSo ps;

	cout<<"Nhap hon so 1: "<<endl;
	InputHS(hs1);
	cout<<"Nhap hon so 2: "<<endl;
	InputHS(hs2);

	hs = Calculate(hs1,hs2);
	ps.Tu = hs.Tu;
	ps.Mau = hs.Mau;
	cout<<"Tong hai hon so la: ";
	PrintHS(hs,ps);
	return 0;
}