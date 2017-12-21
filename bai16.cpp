#include <iostream>
using namespace std;

float Cal(int x , int n)
{
	int T = 1;
	for (int i = 1 ; i <= n ; i++)
	{
		T = T*x;
	}
	return T;
}

float Calculate (int x , int n)
{
	float T = 0 ;
	float S = 0;
	for ( int i = 1 ; i <= n ; i++)
	{
		S += i;
		T +=  Cal(x,i) / S;
	}
	return T;
}

int main()
{
	int n;
	int x;
	cout<<"Nhap x va n: "; 
	cin>>x;
	cin>>n;
	cout<<Calculate(x,n);
	
	return 0;
}