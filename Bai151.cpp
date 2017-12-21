#include <iostream>
#include <cmath>
using namespace std;

bool isPrime (int n )
{
	for (int i = 2 ; i <= sqrt(n); i++)
		if (n % i == 0)
			return false;
	return true;
}

int Calculate (int Array[])
{
	int temp = 0;
	for (int i = 0 ; i < 10 ;i++)
		if (isPrime(Array[i]))
		{
			temp = Array[i];
			break;
		}
	if ( temp == 0)
		return 0;
	else
	{
		for (int j = 0 ; j < 10 ; j++)
			if (temp < Array[j] && isPrime(Array[j]))
				temp = Array[j];
		return temp;
	}
}

int main()
{
	int Array[10];
	for (int i = 0 ; i < 10 ; i++)
		cin>>Array[i];
	cout<<Calculate(Array);
	return 0;
}