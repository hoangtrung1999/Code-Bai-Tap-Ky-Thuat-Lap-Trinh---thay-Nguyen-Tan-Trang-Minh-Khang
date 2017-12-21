#include <iostream>
#include <cmath>
using namespace std;

bool Check (int n )
{
	for (int i = 2 ; i <= sqrt(n) ; i++)
		if (n % i ==0)
			return false;
	return true;
}
int Calculate (int Array[10])
{
	int count = 0;
	for (int i = 0 ; i < 10 ; i++)
		if (Check(Array[i]))
			count++;
	return count;
}

int main()
{
	int Array[10];
	for (int i = 0 ; i < 10 ; i++)
		cin>>Array[i];
	Calculate(Array);
	return 0;
}