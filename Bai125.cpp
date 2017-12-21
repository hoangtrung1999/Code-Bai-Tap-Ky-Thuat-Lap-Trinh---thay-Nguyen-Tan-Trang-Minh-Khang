#include <iostream>
#include <cmath>
using namespace std;

bool IsPrime (int n)
{
	for (int i = 2 ; i < sqrt(n) ; i++)
		if ( n % i == 0)
			return false;
	return true;
}

int Calculate (int Array[10])
{
	int count = 0;
	for (int i = 0 ; i < 10 ; i++)
		if ( IsPrime(Array[i]) && Array[i] < 100)
			count++;
	return count;
}

int main()
{
	int Array[10];
	for (int i = 0 ; i < 10 ; i++)
		cin>>Array[i];
	cout<<Calculate(Array);
	return 0;
}