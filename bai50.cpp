#include <iostream>
using namespace std;

int Calculate ( int n)
{
	int S = n % 10;
	while ( n / 10 != 0)
	{
		n = n /10;
		S = S*10 + n%10;
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