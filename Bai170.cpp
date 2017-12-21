#include <iostream>
#include <cmath>
using namespace std;

bool Check ( int n )
{
	if ( n < 2 )
		return false;
	for ( int i = 2; i <= sqrt(n) ; i++)
		if ( n % i == 0 )
			return false;
	return true;
}

int Calculate (int Array[10])
{
	int Max = Array[0];
	for (int i = 1 ; i < 10 ; i++)
		if ( Max < Array[i])
			Max = Array[i];
		Max++;
	while ( !Check(Max))
		Max++;
	return Max;
}

int main(int argc, char const *argv[])
{
	int Array[10];
	for (int i = 0 ; i < 10 ; i++)
		cin>>Array[i];
	cout<<Calculate(Array);
	return 0;
}
