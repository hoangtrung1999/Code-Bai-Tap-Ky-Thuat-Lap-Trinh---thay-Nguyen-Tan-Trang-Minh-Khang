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
	cout<<"Toa do diem la: A("<<point.x<<","<<point.y<<","<<point.z<<")"<<endl;
}

float Distance (Oxyz pointA , Oxyz pointB)
{
	float distance = sqrt((pointA.x-pointB.x)*(pointA.x-pointB.x)+
		(pointA.y-pointB.y)*(pointA.y-pointB.y)+
		(pointA.z-pointB.z)*(pointA.z-pointB.z));
	cout<<"Khoang cach giua hai diem: "<<distance;
}

int main()
{
	Oxyz pointA , pointB;
	cout<<"Nhap toa do diem A: "<<endl;
	Input(pointA);
	PrintPoint(pointA);
	cout<<"Nhap toa do diem B: "<<endl;
	Input(pointB);
	PrintPoint(pointB);
	return 0;
}