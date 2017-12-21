#include <iostream>
using namespace std;

int Power (int x , int n)
{
	int T = 1;
	for (int i = 1 ; i <= n ; i++)
	{
		T = T*x;
	}
	return T;
}

int Calculate (int x , int n)
{
	int S = 0;
	for (int i = 1 ; i <= n ; i++)
	{
		S += Power (x,2*i+1);
	}
	return S;
}

int main()
{
	int n;
	int x;
	cin>>x>>n;
	cout<<Calculate(x,n);
	return 0;
}