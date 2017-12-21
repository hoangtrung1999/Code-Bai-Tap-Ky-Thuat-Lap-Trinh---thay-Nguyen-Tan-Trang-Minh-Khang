#include <iostream>
using namespace std;

int Calculate (int n)
{
	int S = 0;
	for (int i = 1 ; i < n ; i++)
		if ( i & 1 )
			S += i;
	return S;
}

int main()
{
	int n;
	cin>>n;
	cout<<Calculate(n);
	return 0;
}