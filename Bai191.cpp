#include <iostream>
using namespace std;

int Calculate (int Array[10])
{
	for (int i = 1 ; i < 10 ;)
	{
		if (Array[i] > Array[i+1] && Array[i] > Array[i-1])
		{
			cout<<Array[i];
			i += 2;
		}
		else
			i++;
	}
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