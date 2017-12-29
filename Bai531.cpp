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

void PrintHS(HonSo hs, PhanSo ps)
{
	cout<<hs.PhanNguyen<<"/"<<"("<<hs.Tu<<"/"<<hs.Mau<<")"<<endl;
}

void Calculate(HonSo &hs1 , HonSo &hs2)
{
	HonSo hs;
	PhanSo ps1;
	PhanSo ps2;

	ps1.Tu = hs1.PhanNguyen*hs1.Mau + hs1.Tu;
	ps1.Mau = hs1.Mau;
	ps2.Tu = hs2.PhanNguyen*hs2.Mau + hs2.Tu;
	ps2.Mau = hs2.Mau;

	hs1.Mau = ps1.Mau*ps2.Mau;
	hs1.Tu = (ps1.Tu*ps2.Mau) % hs1.Mau;
	hs1.PhanNguyen = (ps1.Tu*ps2.Mau) / hs1.Mau;

	hs2.Mau = ps1.Mau*ps2.Mau;
	hs2.Tu = (ps2.Tu*ps1.Mau) % hs1.Mau;
	hs2.PhanNguyen = (ps2.Tu*ps1.Mau) / hs1.Mau;	
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
	PhanSo ps1, ps2;

	cout<<"Nhap hon so 1: "<<endl;
	InputHS(hs1);
	cout<<"Nhap hon so 2: "<<endl;
	InputHS(hs2);
	Calculate(hs1,hs2);

	ps1.Tu = hs1.Tu;
	ps2.Tu = hs2.Tu;
	ps1.Mau = hs1.Mau;
	ps2.Mau = hs2.Mau;

	cout<<"Hai hon so sau khi quy dong la: "<<endl;
	cout<<"Hon so 1: ";
	PrintHS(hs1,ps1);
	cout<<"Hon so 2: ";
	PrintHS(hs2,ps2);
	return 0;
}