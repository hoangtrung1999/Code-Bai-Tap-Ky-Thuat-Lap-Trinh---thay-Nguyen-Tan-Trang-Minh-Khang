#include <iostream>
#include <string>
using namespace std;

void Calculate()
{
	string name;
	int toan;
	int van;
	float diemtb;

	cout<<"Nhap ten: ";
	getline(cin,name);
	cout<<"Nhap diem toan: ";
	cin>>toan;
	cout<<"Nhap diem van: ";
	cin>>van;
	diemtb = (toan + van) / 2.0;
	cout<<"Diem trung binh: "<<diemtb;
}

int main()
{
	Calculate();
	return 0;
}