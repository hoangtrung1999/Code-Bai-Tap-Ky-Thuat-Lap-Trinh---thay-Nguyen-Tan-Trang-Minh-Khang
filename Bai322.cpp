#include <iostream>
using namespace std;

int Sum (int Array[][100] , int x ,int m)
{
	int S = 0;
	for (int i = 0 ; i < m ; i++)
		S += Array[i][x];
	return S;
}

int main()
{
	int Array[100][100];
	int m , n;
	cout<<"Nhap kich thuoc MxN cua mang:"<<endl;
	cin>>m>>n;
	cout<<"Nhap mang:"<<endl;
	for (int i = 0 ; i < m  ; i++)
		for (int j = 0 ; j < n ;j++)
			cin>>Array[i][j];
	int x;
	cout<<"Nhap chi so cot can tinh"<<endl;
	cin>>x;
	cout<<Sum(Array,x,m);
	return 0;
}