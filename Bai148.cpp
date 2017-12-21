#include <iostream>
#include <cmath>
using namespace std;

bool isPrime (int n)
{
	for (int i = 2 ; i <= sqrt(n) ; i++)
		if (n % i == 0)
			return false;
	return true;
}

int Calculate (int Array[])
{
	int temp = -1;
	for (int i = 0 ; i < 10 ; i++)
		if (isPrime(Array[i]))
			temp = Array[i];
	return temp;
}

int main()
{
	int Array[10];
	for (int i = 0 ; i < 10 ; i++)
		cin>>Array[i];
	cout<<Calculate(Array);
	return 0;
}