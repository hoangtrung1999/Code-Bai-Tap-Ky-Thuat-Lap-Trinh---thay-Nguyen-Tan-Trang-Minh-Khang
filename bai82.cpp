#include <iostream>
using namespace std;

long Calculate(long a , long b, long c)
{
	long Max = a;
	if ( Max < b) Max = b;
	if ( Max < C) Max = c;
	return Max;
}

int main()
{
	long a , b ,c ;
	cin>>a>>b>>c;
	cout<<Calculate(a,b,c);
	return 0;
}