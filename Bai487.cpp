#include <iostream>
using namespace std;

struct DonThuc // a*x^n
{
	int a;
	int x;
	int n;
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

DonThuc Calculate (DonThuc D1)
{
	DonThuc D;
	D.a = D1.a * D1.n;
	D.n = D1.n - 1;
	return D;
}

int main(int argc, char const *argv[])
{
	DonThuc D1, D;
	InputDT(D1);
	PrintDT(D1);
	D = Calculate(D1);
	cout<<"Don thuc sau khi dao ham la: "<<endl;
	PrintDT(D);
	return 0;
}