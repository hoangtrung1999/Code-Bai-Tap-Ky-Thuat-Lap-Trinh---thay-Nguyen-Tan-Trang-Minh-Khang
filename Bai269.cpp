#include <iostream>
using namespace std;

int Calculate (int Array[100], int n, int x)
{
	int k;
	for (int i = n - 1 ; i > -1 ; i--)
		if (x > Array[i])
		{
			k = i + 1;
			break;
		} 
		else
			k = 0;
	n++;
	for (int i = n - 1 ; i > k ; i--)
		Array[i] = Array[i-1];
	Array[k] = x;
	for (int i = 0 ; i < n ; i++)
		cout<<Array[i];
}

int main(int argc, char const *argv[])
{
	int Array[100];
	cout<<"Nhap kich thuoc mang:"<<endl;
	int n;
	cin>>n;
	for (int i = 0 ; i < n ; i++)
		cin>>Array[i];
	cout<<"Nhap gia tri x can them: "<<endl;
	int x;
	cin>>x;
	cout<<"Mang sau khi them phan tu x vao:"<<endl;
	Calculate(Array,n,x);
	return 0;
}
