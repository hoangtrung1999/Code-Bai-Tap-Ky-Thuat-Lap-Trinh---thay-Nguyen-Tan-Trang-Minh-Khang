#include <iostream>
using namespace std;

bool Check (int n)
{
	while ( n % 5 == 0)
	{
		n = n / 5;
	}
	if ( n == 1)
		return true;
	else
		return false;
}

int Calculate (int Array[10])
{
	int Max = 0;
	for (int i = 0 ; i < 10 ; i++)
		if ( Max < Array[i] && Check(Array[i]))
			Max = Array[i];
	return Max;
}

int main(int argc, char const *argv[])
{
	int Array[10];
	for (int i = 0 ; i < 10 ; i++)
		cin>>Array[i];
	cout<<Calculate(Array);
	return 0;
}