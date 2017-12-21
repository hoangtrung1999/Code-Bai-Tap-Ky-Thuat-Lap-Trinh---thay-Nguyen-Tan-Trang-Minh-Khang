#include <iostream>
using namespace std;

int Calculate (int n)
{
	int count = 0;
	while ( n / 10 != 0 )
	{
		count += n % 10;
		n = n / 10;
	}
	count += n % 10;
	return count;
}

int main()
{
	int n;
	cin>>n;
	cout<<Calculate(n);
	return 0;
}