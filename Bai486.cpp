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

DonThuc Multiply (DonThuc D1 , DonThuc D2)
{
	DonThuc D;
	D.a = D1.a * D2.a;
	D.n = D1.n + D2.n;
	return D;
}

int main(int argc, char const *argv[])
{
	DonThuc D1,D2, D;
	InputDT(D1);
	PrintDT(D1);
	InputDT(D2);
	PrintDT(D2);
	D = Multiply(D1,D2);
	PrintDT(D);
	return 0;
}