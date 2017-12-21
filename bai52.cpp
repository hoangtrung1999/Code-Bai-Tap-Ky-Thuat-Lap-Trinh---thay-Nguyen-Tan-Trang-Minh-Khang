#include <iostream>
using namespace std;

long long Calculate ( long long n)
{
	long long Min = n % 10;
	while ( n / 10 != 0)
	{
		n = n / 10;
		if ( n % 10 < Min)
			Min = n % 10;
	}
	return Min;
}

int main()
{
	long long n;
	cin>>n;
	cout<<Calculate(n);
	return 0;
}