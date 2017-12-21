#include <iostream>
#include <cmath>
using namespace std;

int CountDigit (int n)
{
	int count = 0 ;
	while ( n / 10 != 0)
	{
		n = n / 10;
		count++;
	}
	return count;
}

int Power (int x, int n)
{
	int T = 1;
	for (int i = 0 ; i < n ; i++)
		T *= x;
	return T;
}

int Calculate (int Array[10])
{
	for (int i = 0 ; i < 10 ; i++)
		if ( !((Array[i]/(Power(10,CountDigit(Array[i])))) &1))
			cout<<i<<endl;
	return 0;
}

int main()
{
	int Array[10];
	for (int i = 0 ; i < 10 ; i++)
		cin>>Array[i];
	Calculate(Array);
	return 0;
}