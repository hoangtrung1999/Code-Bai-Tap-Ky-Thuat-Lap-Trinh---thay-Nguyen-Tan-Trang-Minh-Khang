#include <iostream>
#include <cmath>
using namespace std;

bool isPrime (int n )
{
	for (int i = 0 ; i <= sqrt(n) ; i++)
		if ( n % i == 0)
			return false;
	return true;
}

int Calculate (int Array[10])
{
	float S = 0 ;
	int count = 0;
	for (int i = 0 ; i < 10 ; i++)
		if (isPrime(Array[i]))
		{
			S += Array[i];
			count++;
		}
		
	return S/count;
}

int main(int argc, char const *argv[])
{
	int Array[10];
	for (int i = 0 ; i < 10 ; i++)
		cin>>Array[i];
	cout<<Calculate(Array);
	return 0;
}