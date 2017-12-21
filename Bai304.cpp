#include <iostream>
using namespace std;

int Show (int Array[10], int j , int k)
{
	for (int i = j ; i <= k ; i++)
		cout<<Array[i]<<" ";
	return 0;
}

int Calculate (int Array[10], int M)
{
	int S;
	int a;
	int b;
	for (int j = 0 ; j < 10 ; j++)
	{
		int k = j ;
		S = 0;
		cout<<Array[k]<<endl;
		while (S + Array[k] <= M)
		{
			S += Array[k];
			a = j;
			b = k;
			k++;
			cout<<"S = "<<S<<endl;
			cout<<Array[k]<<endl;
			if ( S == M)
				Show(Array,a,b);
		}
		
	}
	
	return 0;
}

int main()
{
	int Array[10];
	cout<<"Nhap mang:"<<endl;
	for (int i = 0 ; i < 10 ; i++)
		cin>>Array[i];
	int M;
	cout<<"Nhap M: "<<endl;
	cin>>M;
	Calculate(Array,M);
	return 0;
}