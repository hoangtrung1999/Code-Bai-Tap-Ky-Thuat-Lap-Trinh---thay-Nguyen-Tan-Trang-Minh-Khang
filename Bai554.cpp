#include <iostream>
using namespace std;

struct Oxy
{
	int x;
	int y;
};

void Input (Oxy &point)
{
	cout<<"Nhap toa do x: ";
	cin>>point.x;
	cout<<"Nhap toa do y: ";
	cin>>point.y;
}

int Check (Oxy point)
{
	if ( point.x > 0)
	{
		if (point.y > 0)
			return 1;
		else if (point.y < 0)
			return 4;
		else
			return 0;
	}
	else if ( point.x < 0)
	{
		if (point.y > 0)
			return 2;
		else if (point.y < 0)
			return 3;
		else
			return 0;
	}
	else
		return 0;
}

int main()
{
	Oxy pointA;
	cout<<"Nhap toa do diem A: "<<endl;
	Input(pointA);
	switch (Check(pointA))
	{
		case 1:
			cout<<"Diem nam o goc phan tu thu nhat.";
			break;
		case 2:
			cout<<"Diem nam o goc phan tu thu hai.";
			break;
		case 3:
			cout<<"Diem nam o goc phan tu thu ba.";
			break;
		case 4:
			cout<<"Diem nam o goc phan tu thu tu.";
			break;
		case 0:
			cout<<"Diem khong nam o goc phan tu nao.";
			break;
	}
	return 0;
}