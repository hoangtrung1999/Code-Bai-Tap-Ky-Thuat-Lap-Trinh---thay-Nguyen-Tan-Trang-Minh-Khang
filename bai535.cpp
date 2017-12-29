#include <iostream>
using namespace std;

struct SoPhuc
{
	int PhanThuc;
	int PhanAo;
};

void Input (SoPhuc &sp)
{
	cout<<"Nhap phan thuc cua so phuc: ";
	cin>>sp.PhanThuc;
	cout<<"Nhap phan ao cua so phuc: ";
	cin>>sp.PhanAo;
}

void PrintSP (SoPhuc sp)
{
	if (sp.PhanAo > 0)
	{
		cout<<sp.PhanThuc<<"+"<<sp.PhanAo<<"i"<<endl;
	}
	else if (sp.PhanAo == 0)
		cout<<sp.PhanThuc<<endl;
	else
		cout<<sp.PhanThuc<<sp.PhanAo<<"i"<<endl;
}

SoPhuc SumSP(SoPhuc sp1, SoPhuc sp2)
{
	SoPhuc sp;
	sp.PhanThuc = sp1.PhanThuc + sp2.PhanThuc;
	sp.PhanAo = sp1.PhanAo + sp2.PhanAo;
	return sp;
}


int main(int argc, char const *argv[])
{
	SoPhuc sp1, sp2 , sp;
	cout<<"Nhap so phuc 1: "<<endl;
	Input(sp1);
	cout<<"Nhap so phuc 2: "<<endl;
	Input(sp2);
	cout<<"Tong hai so phuc la: "<<endl;
	sp = SumSP(sp1,sp2);
	PrintSP(sp);
	return 0;
}