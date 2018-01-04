#include <iostream>
using namespace std;

struct Oxyzz
{
	int x;
	int y;
	int z;
};

void Input (Oxyzz &point)
{
	cout<<"Nhap toa do x: ";
	cin>>point.x;
	cout<<"Nhap toa do y: ";
	cin>>point.y;
	cout<<"Nhap toa do z: ";
	cin>>point.z;
}

void PrintPoint (Oxyz point)
{
	cout<<"Toa do diem la: A("<<point.x<<","<<point.y<<","<<point.z<<")"<<endl;
}

int main()
{
	Oxyz pointA;
	cout<<"Nhap toa do diem A: "<<endl;
	Input(pointA);
	PrintPoint(pointA);
	return 0;
}