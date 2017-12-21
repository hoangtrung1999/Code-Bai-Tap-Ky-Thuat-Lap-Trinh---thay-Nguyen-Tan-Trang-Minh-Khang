#include <iostream>
using namespace std;

bool Check (int n)
{
	while (n / 10 != 0)
	{
		if (!( (n%10) &1))
			return false;
		else
			n = n / 10;
	}
	return true;
}

int Calculate (int Array[10])
{
	for (int i = 0 ; i < 10 ; i++)
		if (Check(Array[i]))
			cout<<Array[i];
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