#include <iostream>
#include <cmath>
using namespace std;

float Calculate (int n)
{
	if ( n == 1 ) 
		return 1;
	else 
	{
		return pow(n + Calculate(n-1), 1.0/(n+1));
	}
}

int main()
{
	int n;
	cin>>n;
	cout<<Calculate(n);
	return 0;
}