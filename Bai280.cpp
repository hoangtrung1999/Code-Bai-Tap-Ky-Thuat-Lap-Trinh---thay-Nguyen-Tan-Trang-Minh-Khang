#include <iostream>
using namespace std;

void Move (int Array[100] , int n, int k, int &current)
{
	for (int i = k ; i > current - 1 ; i--)
		Array[i] = Array[i-1];
	Array[current] = 1;
	current++;
}

int Calculate (int Array[100], int n)
{
	int current = 0;
	for (int i = 0 ; i < n ; i++)
		if (Array[i] == 1)
			Move(Array,n,i,current);
	for (int i = 0 ; i < n ; i++)
		cout<<Array[i]<<" ";
	return 0;
}

int main(int argc, char const *argv[])
{
	int Array[100];
	int n;
	cout<<"Nhap kich thuoc mang: ";
	cin>>n;
	for (int i = 0 ; i < n ; i++)
		cin>>Array[i];
	Calculate(Array,n);
	return 0;
}
