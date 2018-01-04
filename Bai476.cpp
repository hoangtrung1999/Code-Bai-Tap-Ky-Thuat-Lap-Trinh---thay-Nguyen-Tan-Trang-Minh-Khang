#include <iostream>
using namespace std;

struct HonSo
{
	int PhanNguyen;
	int Tu;
	int Mau;
};

void PrintHS(HonSo hs)
{
	cout<<hs.PhanNguyen<<"/"<<"("<<hs.Tu<<"/"<<hs.Mau<<")";
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
	cout<<"Nhap hon so : "<<endl;
	InputHS(hs);
	PrintHS(hs);
	return 0;
}