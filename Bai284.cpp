#include <iostream>
using namespace std;

void SwapNumb (int &a , int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void UpsideDown (int Array[100], int n)
{
	int j = n - 1;
	for (int i = 0 ; i < n/2 ; i++)
	{
		SwapNumb(Array[i] , Array[j]);
		j--;
	}
}

int Calculate (int Array[100], int n)
{
	int ArrayB[100];
	int size = 0;
	bool CheckArray[100] = {false};
	for (int i = 0 ; i < n ; i++)
		if (!(Array[i]&1))
		{
			ArrayB[size] = Array[i];
			size++;
			CheckArray[i] = true;
		}
	UpsideDown(ArrayB,size);
	size = 0;
	for (int i = 0 ; i < n ; i++)
	{
		if (CheckArray[i])
		{
			Array[i] = ArrayB[size];
			size++;
		}
		cout<<Array[i]<<" ";
	}
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
