#include <iostream>
using namespace std;

struct SoPhuc
{
	float PhanThuc;
	float PhanAo;
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

int main(int argc, char const *argv[])
{
	SoPhuc sp;
	Input(sp);
	PrintSP(sp);
	return 0;
}