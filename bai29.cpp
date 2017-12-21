#include <iostream>
using namespace std;

int Calculate(int n)
{
	int Max = 1;
	for (int i = 3 ; i < n ; i++)
		if ( n % i == 0 && i % 2 != 0 && i >= Max) 
			Max = i;
	return Max;
}

int main()
{
	int n;
	cin>>n;
	cout<<Calculate(n);
	return 0;
}