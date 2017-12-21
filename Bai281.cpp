#include <iostream>
using namespace std;

void MoveToFirst (int Array[100] , int k , int &current, int x)
{
	for (int i = k ; i > current -1 ; i--)
		Array[i] = Array[i-1];
	Array[current] = x;
	current++;
}


int Calculate (int Array[100], int n)
{
	int current = 0;
	for (int i = 0 ; i < n ; i++)
		if (!(Array[i]&1) && Array[i] != 0)
			MoveToFirst(Array,i,current,Array[i]);
	current++;
	for (int i = current ; i < n ; i++)
		if (Array[i] == 0)
			MoveToFirst(Array,i,current,Array[i]);


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
