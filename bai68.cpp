#include <iostream>
using namespace std;

int Power(int x , int n)
{
	int T = 1;
	for (int i = 0 ; i < n ; i++)
		T *= x;
	return T;

}

float Calculate ( int x , int n)
{
	float S = 0;
	for ( int i = 1 ; i <= n ; i++)
		S += Power(-1,i) * Power(x,2*i);
	return S;

}

int main()
{
	int n , x;
	cin>>x>>n;
	cout<<Calculate(x,n);
	return 0;
}