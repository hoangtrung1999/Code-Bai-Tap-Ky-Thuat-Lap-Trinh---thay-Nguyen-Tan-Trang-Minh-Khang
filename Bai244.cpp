#include <iostream>
using namespace std;

bool Check (int n)
{
	int S = 0 ;
	for (int i = 1 ; i < n ; i++)
		if ( n % i == 0)
			S += i;
	if ( S == n )
		return true;
	else
		return false;
}

int Calculate (int Array[10])
{
	for (int i = 0 ; i < 10 ; i++)
		if (Array[i] > 256)
			continue;
		else
			if (Check(Array[i]))
				return 1;
	return 0;
}

int main()
{
	int Array[10];
	for (int i = 0 ; i < 10;i++)
		cin>>Array[i];
	cout<<Calculate(Array);
	return 0;
}