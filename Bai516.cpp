#include <iostream>
using namespace std;

class PhanSo
{
	public:
		int Tu;
		int Mau;
	PhanSo operator+(PhanSo phansoB)
	{
		PhanSo ps;
		ps.Tu = this->Tu*phansoB.Mau + this->Mau*phansoB.Tu;
		ps.Mau = this->Mau*phansoB.Mau;
		return ps;
	}
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

int main(int argc, char const *argv[])
{
	PhanSo phansoA, phansoB , phanso;
	cout<<"Nhap tu so phan so A: ";
	cin>>phansoA.Tu;
	cout<<"Nhap mau so phan so A: ";
	cin>>phansoA.Mau;
	cout<<"Nhap tu so phan so B: ";
	cin>>phansoB.Tu;
	cout<<"Nhap mau so phan so B: ";
	cin>>phansoB.Mau;
	// Operator++;
	phanso = phansoA + phansoB;
	cout<<"Ket qua sau khi thuc hien phep cong hai phan so la: "<<phanso.Tu/(GDC(phanso.Tu,phanso.Mau))<<"/"<<phanso.Mau/(GDC(phanso.Tu,phanso.Mau));
	return 0;
}