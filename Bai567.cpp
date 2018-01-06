#include <iostream>
using namespace std;

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

int main(int argc, char const *argv[])
{
	Circle c1;
	InputCircle(c1);
	PrintCircle(c1);
	return 0;
}