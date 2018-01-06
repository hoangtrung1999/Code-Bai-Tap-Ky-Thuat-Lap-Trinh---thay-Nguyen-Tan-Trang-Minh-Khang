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

float Length (float x1 , float x2 , float y1 , float y2)
{
	return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}

void PrintTriangle (Triangle T)
{
	cout<<"Tam giac co dang: "<<"("<<T.x1<<","<<T.y1<<")"
	<<"("<<T.x2<<","<<T.y2<<")"
	<<"("<<T.x3<<","<<T.y3<<")"<<endl;
}

float Area (Triangle T)
{
	float HaftPerimeter = ( Length(T.x1,T.x2,T.y1,T.y2)+
							Length(T.x1,T.x3,T.y1,T.y3)+
							Length(T.x3,T.x2,T.y3,T.y2) ) /2;
	cout<<"Dien tich cua tam giac la: "<<sqrt(HaftPerimeter*(HaftPerimeter -Length(T.x1,T.x2,T.y1,T.y2) )
												*(HaftPerimeter -Length(T.x1,T.x3,T.y1,T.y3))*
												(HaftPerimeter-Length(T.x3,T.x2,T.y3,T.y2)));
}

int main(int argc, char const *argv[])
{
	Triangle T;
	InputTriangle(T);
	PrintTriangle(T);
	Area(T);
	return 0;
}