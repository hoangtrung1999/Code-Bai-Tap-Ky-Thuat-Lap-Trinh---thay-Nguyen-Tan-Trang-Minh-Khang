#include <iostream>
using namespace std;

int Calculate (int Array[100], int n, int k)
{
	if (k == n -1)
		n--;
	else
	{
		for (int i = k ; i < n - 1 ; i++)
			Array[i] = Array[i+1];
		n--;
	}
		cout<<"Mang sau khi xoa: "<<endl;
	for (int i = 0 ; i < n ; i++)
		cout<<Array[i];
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
	cout<<"Nhap vi tri k can xoa: ";
	int k;
	cin>>k;
	Calculate(Array,n,k);
	return 0;
}
