#include <iostream>
using namespace std;
#define Pi 3.141592653589793238
struct Circle
{
	float x;
	float y;
	float z;
	float r;
};

void InputCircle(Circle &c1)
{
	cout<<"Nhap thong tin duong tron:"<<endl;
	cout<<"Nhap toa do x: ";
	cin>>c1.x;
	cout<<"Nhap toa do y: ";
	cin>>c1.y;
	cout<<"Nhap toa do z: ";
	cin>>c1.z;
	cout<<"Nhap ban kinh duong tron: ";
	cin>>c1.r;
}


int Check (Circle c1 , Circle c2)
{
	float distance;
	distance = sqrt((c1.x-c2.x)*(c1.x-c2.x)+(c1.y-c2.y)*(c1.y-c2.y)
		+(c1.z-c2.z)*(c1.z-c2.z));
	float delta = distance - (c1.r + c2.r);
	if ( delta == 0)
		cout<<"Hai hinh cau tiep xuc nhau.";
	else if ( delta > 0)
		cout<<"Hai hinh cau khong cat nhau";
	else
		cout<<"Hai hinh cau cat nhau";
	return 0;
}
int main()
{
	Circle c1 , c2;
	InputCircle(c1);
	InputCircle(c2);
	Check(c1,c2);
	return 0;
}