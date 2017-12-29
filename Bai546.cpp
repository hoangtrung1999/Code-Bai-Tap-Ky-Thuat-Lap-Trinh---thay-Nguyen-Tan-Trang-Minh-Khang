#include <iostream>
using namespace std;

struct Oxy
{
	int x;
	int y;
};

void Input (Oxy &point)
{
	cout<<"Nhap toa do x: ";
	cin>>point.x;
	cout<<"Nhap toa do y: ";
	cin>>point.y;
}

void PrintPoint (Oxy point)
{
	cout<<"Toa do diem doi xung qua goc toa do la: A'("<<-point.x<<","<<-point.y<<")"<<endl;
}

int main()
{
	Oxy pointA;
	cout<<"Nhap toa do diem A: "<<endl;
	Input(pointA);
	PrintPoint(pointA);
	return 0;
}