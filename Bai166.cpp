#include <iostream>
using namespace std;

bool Check (long n)
{
	while (!(n & 1) )
	{
			n /= 2;
	}
	if (n%10 == 1)
		return true;
	else 
		return false;
}


int Calculate (int Array[10])
{
	for (int i = 0 ; i < 10 ; i++)
		if (Check(Array[i]))
			return Array[i];
	return 0;
}

int main()
{
	int Array[10];
	for (int i = 0 ; i < 10 ; i++)
		cin>>Array[i];
	cout<<Calculate(Array);
	return 0;
}