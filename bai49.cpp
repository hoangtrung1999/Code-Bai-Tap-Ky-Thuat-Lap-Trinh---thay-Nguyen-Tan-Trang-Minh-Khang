#include <iostream>
using namespace std;

int Calculate ( int n)
{
	while ( n / 10 != 0)
		n = n / 10;
	return n;
}

int main()
{
	int n;
	cin>>n;
	cout<<Calculate(n);
	return 0;
}