#include <iostream>
using namespace std;
#define Pi 3.141592653589793238
struct Circle
{
	float x;
	float y;
	float r;
};
struct Point
{
	float x;
	float y;
};

void InputCircle(Circle &c1)
{
	cout<<"Nhap thong tin duong tron:"<<endl;
	cout<<"Nhap toa do x: ";
	cin>>c1.x;
	cout<<"Nhap toa do y: ";
	cin>>c1.y;
	cout<<"Nhap ban kinh duong tron: ";
	cin>>c1.r;
}

void InputPoint (Point &p1)
{
	cout<<"Nhap thong tin diem:"<<endl;
	cout<<"Nhap toa do x: ";
	cin>>p1.x;
	cout<<"Nhap toa do y: ";
	cin>>p1.y;
}


int Check (Circle c1 , Point p1)
{
	float epsilon = 0.000000001;
	float distance = sqrt((c1.x-p1.x)*(c1.x-p1.x)+(c1.y-p1.y)*(c1.y-p1.y)
		+(c1.z-p1.z)*(c1.z-p1.z));
	float delta = distance - (c1.r);
	if ( delta <= epsilon && delta >= 0)
		cout<<"Diem nam tren duong tron";
	else if ( delta > 0)
		cout<<"Diem nam ngoai duong tron";
	else
		cout<<"Diem nam trong duong tron";
	return 0;
}
int main()
{
	Circle c1;
	Point p1;
	InputCircle(c1);
	InputPoint(p1);
	Check(c1,p1);
	return 0;
}