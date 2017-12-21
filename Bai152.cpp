#include <iostream>
using namespace std;

bool Check (int n)
{
	int S = 0 ;
	for (int i = 1 ; i < n ; i++)
		if ( n % i == 0)
			S += i;
	if (S == n)
		return true;
	return false;
}

int Calculate (int Array[])
{
	int temp = 0 ;
	for (int i = 0 ; i < 10 ; i++)
		if (Check(Array[i]))
			{
				temp = Array[i];
				break;
			}
	if (temp == 0)
		return 0;
	else
	{
		for (int i = 0 ; i < 10 ; i++)
			if ( temp > Array[i] && Check(Array[i]))
				temp = Array[i];
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