#include <iostream>
using namespace std;

int Calculate( int n)
{
	int T = 1;
	for (int i = 1 ; i <= n ; i++)
	{
		if ( n % i == 0)
		{
			T = T*i;
		}
	}
	return T;
}

int main()
{
	int n;
	cin>>n;
	cout<<Calculate(n);

	return 0;
}