#include <iostream>
#include <cmath>
using namespace std;

struct DonThuc // a*x^n
{
	float a;
	float x;
	float n;
};

void InputDT (DonThuc &D)
{
	cout<<"Nhap vao phan nguyen a: ";
	cin>>D.a;
	cout<<"Nhap vao so mu n: ";
	cin>>D.n;
}

void PrintDT (DonThuc D)
{
	cout<<"Don thuc co dang: "<<D.a<<"*"<<"x"<<"^"<<D.n<<endl;
}

float Calculate (DonThuc D1, int x)
{
	return D1.a*pow(x,D1.n);
}

int main(int argc, char const *argv[])
{
	DonThuc D1;
	InputDT(D1);
	PrintDT(D1);
	cout<<"Nhap gia tri x0: "<<endl;
	float x;
	cin>>x;
	cout<<"Gia tri cua don thuc tai x0: "<<Calculate(D1,x);
	return 0;
}