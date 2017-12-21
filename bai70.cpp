#include <iostream>
using namespace std;

int Power (int n , int x)
{
	int T = 1;
	for (int i = 0 ; i < x ; i++)
		T *= n;
	return T;
}

float Calculate (int n)
{
	float M = 0;
	float S = 0;
	for (int i = 1 ; i <= n ; i++)
	{ 
		S += i;
		M += Power ( -1 , i+1 ) * ((float)1 / S); 
	}
	return M;
}

int main()
{
	int n;
	cin>>n;
	cout<<Calculate(n);
	return 0;
}