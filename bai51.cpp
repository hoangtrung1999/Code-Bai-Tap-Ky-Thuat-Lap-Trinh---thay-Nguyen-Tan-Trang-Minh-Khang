#include <iostream>
using namespace std;

long long Calculate ( long long n)
{
	long long Max = n % 10;
	while ( n / 10 != 0)
	{
		n = n / 10;
		if ( n % 10 > Max)
			Max = n % 10;
	}
	return Max;
}

int main()
{
	long long n;
	cin>>n;
	cout<<Calculate(n);
	return 0;
}