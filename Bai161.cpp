#include <iostream>
using namespace std;

int Calculate(int Array[10] , int x ,int y)
{
	for (int i = 0 ; i < 10 ; i++)
		if (Array[i] > x && Array[i] < y)
			return Array[i];
	return x;
}

int main()
{
	int Array[10];
	int x ,y;
	cout<<"Nhap x: ";
	cin>>x;
	cout<<"Nhap y: ";
	cin>>y;
	for (int i = 0 ; i < 10 ; i++)
		cin>>Array[i];
	cout<<Calculate(Array,x,y);
	return 0;
}