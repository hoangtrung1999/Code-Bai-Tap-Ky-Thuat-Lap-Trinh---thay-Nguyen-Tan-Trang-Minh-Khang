#include <iostream>
using namespace std;

int Calculate ( int n )
{
	int S = 0;
	int T = 1;
	for (int i = 1 ; i <= n ; i++)
	{
		T *= i;
		S += T;
	}
	return S;
}

int main()
{
	int n;
	cin>>n;
	cout<<Calculate(n);
	return 0;
}