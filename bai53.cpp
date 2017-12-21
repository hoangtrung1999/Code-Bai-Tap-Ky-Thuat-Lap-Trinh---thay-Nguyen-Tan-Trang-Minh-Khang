#include <iostream>
using namespace std;

int Calculate ( long long n)
{
	long long Max = n % 10;
	long long temp = n;
	int count = 0;
	while ( n / 10 != 0)
	{
		n = n / 10;
		if ( n % 10 > Max)
			Max = n % 10;
	}
	while ( temp / 10 != 0)
	{
		
		if ( temp % 10 == Max)
			count++;
		temp = temp / 10;
	}
	if ( temp % 10 != 0 && temp % 10 == Max)
		count++;
	return count;
}

int main()
{
	long long n;
	cin>>n;
	cout<<Calculate(n);
	return 0;
}