#include <iostream>
using namespace std;
#define Pi 3.141592653589793238
struct Circle
{
	float x;
	float y;
	float r;
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

void PrintCircle (Circle c1)
{
	cout<<"Duong tron co dang: "<<"("<<"("<<c1.x<<","<<c1.y<<")"<<","<<c1.r<<")";
}

float Perimeter (Circle c1)
{
	cout<<"Chu vi duong tron la: ";
	return c1.r*2*Pi;
}

int main(int argc, char const *argv[])
{
	Circle c1;
	InputCircle(c1);
	PrintCircle(c1);
	cout<<Perimeter(c1);
	return 0;
}