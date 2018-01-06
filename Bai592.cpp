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

int CheckTriangle (float a, float b , float c)
{
	if (CheckAttribute(triangle.a,triangle.b,triangle.c) == false)
		return 0;
	else
	{
		if ( a == b && b == c && a == c)
			return 1;
		if ( a == b && b != c 
			|| a == c && b != c
			|| b == c && a != c)
			return 2;
		if ( a*a + b*b == c*c ||
			a*a + c*c == b*b ||
			b*b + c*c == a*a)
			return 3;
	}
}


	
	
	

int main(int argc, char const *argv[])
{
	Triangle T;
	InputTriangle(T);
	PrintTriangle(T);
	switch (CheckTriangle(Length(T.x1,T.x2,T.y1,T.y2),Length(T.x1,T.x3,T.y1,T.y3),Length(T.x3,T.x2,T.y3,T.y2))
				{
					case 0:
						cout<<"Day khong phai la 1 tam giac"<<endl;
						break;
					case 1:
						cout<<"Day la tam giac deu"<<endl;
						break;
					case 2:
						cout<<"Day la tam giac can"<<endl;
						break;
					case 3:
						cout<<"Day la tam giac vuong"<<endl;
						break;
				}
	return 0;
}