#include <iostream>
using namespace std;

float Calculate1 (int x , int n)
{
	int T = 1;
	for (int i = 1 ; i <= n ; i++)
	{
		T = T*x;
	}
	return T;
}

int Cal ( int S)
{
	int T = 1;
	for (int i = S ; i >= 1; i--)
		T *= i;
	return T;
}

float Calculate (float x , int n)
{
	float T = 0 ;
	float S = 0;
	for ( int i = -1 ; i <= n ; i++)
	{
		T +=  Calculate1(x,2*i+1) / Cal(2*i+1);
	}
	return T;
}

int main()
{
	int n;
	float x;
	cout<<"Nhap x va n: "; 
	cin>>x>>n;
	cout<<Calculate(x,n);
	
	return 0;
}