#include <iostream>
using namespace std;

int Calculate (int n)
{
	for (int i = 1; i <= n; i++)
	{
		if ( n%i == 0 && i % 2 != 0 )
		{
			cout<<i;
		}
	}
	return 0;
}

int main()
{
	int n;
	cin>>n;
	Calculate(n);
	return 0;
}