#include <iostream>
using namespace std;

void SwapNumb (int &a , int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

int Calculate (int Array[100], int n)
{
	int j = n - 1;
	for (int i = 0 ; i < n/2 ; i++)
	{
		SwapNumb(Array[i] , Array[j]);
		j--;
	}
	for (int i = 0 ; i < n ; i++)
		cout<<Array[i]<<" ";
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
