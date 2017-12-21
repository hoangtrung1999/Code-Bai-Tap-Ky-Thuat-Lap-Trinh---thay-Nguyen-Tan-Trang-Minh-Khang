#include <iostream>
using namespace std;

int GCD(int a , int b)
{
	if (a == 0) return b;
	else if ( b == 0) return a;
	else 
		{
			if (a > b) GCD( a - b , b);
			else GCD( b - a , a);
		}
}

float LCM (int a , int b)
{
	return (float)(a*b)/GCD(a,b);
}

int main()
{
	int a , b;
	cin>>a>>b;
	cout<<LCM(a,b);
	return 0;
}