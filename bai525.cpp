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

void Calculate(HonSo &hs)
{
	int Tu;
	int Mau;
	Tu = hs.PhanNguyen*hs.Mau + hs.Tu;
	Mau = hs.Mau;
	hs.PhanNguyen = Tu / Mau;
	hs.Tu = Tu % Mau;
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
	HonSo hs;
	PhanSo ps;
	InputHS(hs);
	Calculate(hs);
	ps.Tu = hs.Tu;
	ps.Mau = hs.Mau;
	PrintHS(hs,ps);
	return 0;
}