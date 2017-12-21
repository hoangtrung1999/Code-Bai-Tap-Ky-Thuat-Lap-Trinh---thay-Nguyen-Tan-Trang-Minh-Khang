#include <iostream>
#include <cmath>
using namespace std;

float Calculate(int n)
{
	if ( n == 2 ) 
		return sqrt(2);
	else 
	{
		return pow(n+ Calculate(n-1),1.0/n) ;
	}
}

int main()
{
	int n;
	cin>>n;
	cout<<Calculate(n);
	return 0;
}