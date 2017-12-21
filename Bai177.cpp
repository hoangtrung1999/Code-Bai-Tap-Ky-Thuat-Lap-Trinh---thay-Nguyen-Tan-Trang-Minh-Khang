#include <iostream>
using namespace std;

int Calculate (int Array[10], int x , int y)
{
	for (int i = 0 ; i < 10 ; i++)
		if (Array[i] <= y && Array[i] >= x)
			cout<<Array[i];
	return 0;
}

int main()
{
	int Array[10];
	int x;
	int y;
	cout<<"Nhap x:";
	cin>>x;
	cout<<"Nhap y:";
	cin>>y;
	for (int i = 0 ; i < 10 ; i++)
		cin>>Array[i];
	Calculate(Array,x,y);
	return 0;
}