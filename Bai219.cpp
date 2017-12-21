#include <iostream>
using namespace std;

int Calculate (int Array[10],int x)
{
	int count = 0;
	for (int i = 0 ; i < 10 ; i++)
		if (Array[i] == x)
			count++;
	return count;
}

int main(int argc, char const *argv[])
{
	int Array[10];
	int x;
	cout<<"Nhap mang:";
	for (int i = 0 ; i < 10 ; i++)
		cin>>Array[i];
	cout<<"Nhap x:";
	cin>>x;
	cout<<"So lan xuat hien cua x:"<<Calculate(Array,x);
	return 0;
}