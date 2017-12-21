#include <iostream>
using namespace std;

int Calculate(int a , int b)
{
	if (a == 0) return b;
	else if ( b == 0) return a;
	else 
		{
			if (a > b) Calculate( a - b , b);
			else Calculate ( b - a , a);
		}
}

int main()
{
	int a , b;
	cin>>a>>b;
	cout<<Calculate(a,b);
	return 0;
}