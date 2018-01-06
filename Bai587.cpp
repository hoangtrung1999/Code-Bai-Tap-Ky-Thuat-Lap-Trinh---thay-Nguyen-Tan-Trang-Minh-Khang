#include <iostream>
#include <cmath>
using namespace std;

struct Triangle
{
	float x1 , x2 , x3;
	float y1, y2 , y3;
};

void InputTriangle (Triangle &T)
{
	cout<<"Nhap vao toa do dinh 1 (x1,y1):"<<endl;
	cin>>T.x1>>T.y1;
	cout<<"Nhap vao toa do dinh 2(x2,y2):"<<endl;
	cin>>T.x2>>T.y2;
	cout<<"Nhap vao toa do dinh 3(x3,y3):"<<endl;
	cin>>T.x3>>T.y3;
}

void PrintTriangle (Triangle T)
{
	cout<<"Trong Tam Tam giac co dang: "<<"("<<(T.x1+T.x2+T.x3)/3<<")"
	<<"("<<(T.y1+T.y2+T.y3)/3<<")"
	<<"("<<(T.z1+T.z2+T.z3)/3<<")"<<endl;
}

int main(int argc, char const *argv[])
{
	Triangle T;
	InputTriangle(T);
	PrintTriangle(T);
	return 0;
}