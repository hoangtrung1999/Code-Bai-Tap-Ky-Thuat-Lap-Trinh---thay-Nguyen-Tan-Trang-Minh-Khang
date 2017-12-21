#include <iostream>
using namespace std;

int Calculate (int x)
{
	if ( x < 5 )
		return (-2*x*x + 4*x - 9);
	else
		return (2*x*x + 5*x +9);
}

int main()
{
	int n;
	cin>>n;
	cout<<Calculate(n);
	return 0;
}