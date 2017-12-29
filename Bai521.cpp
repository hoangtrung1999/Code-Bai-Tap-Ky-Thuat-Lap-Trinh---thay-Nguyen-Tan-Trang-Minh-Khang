#include <iostream>
using namespace std;

class PhanSo
{
	public:
		int Tu;
		int Mau;
	PhanSo operator++(int)
	{
		PhanSo ps;
		ps.Tu = this->Tu - this->Mau;
		ps.Mau = this->Mau;
		return ps;
	}
};

int main(int argc, char const *argv[])
{
	PhanSo phanso;
	cout<<"Nhap tu so: ";
	cin>>phanso.Tu;
	cout<<"Nhap mau so: ";
	cin>>phanso.Mau;
	// Operator++;
	phanso = phanso++;
	cout<<"Ket qua sau khi thuc hien phep ++ la: "<<phanso.Tu<<"/"<<phanso.Mau;
	return 0;
}