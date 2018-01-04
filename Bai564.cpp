#include <iostream>
#include <cmath>
using namespace std;

struct Oxyz
{
	int x;
	int y;
	int z;
};

void Input (Oxyz &point)
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
	cout<<"Toa do diem doi xung qua Oxz la: A'("<<point.x<<","<<-point.y<<","<<point.z<<")"<<endl;
}


int main()
{
	Oxyz pointA;
	cout<<"Nhap toa do diem A: "<<endl;
	Input(pointA);
	PrintPoint(pointA);
	return 0;
}