/*#include <iostream>
using namespace std;

int UCNN (int a , int b)
{
	if (a == 0)
		return b;
	else if (b == 0)
		return a;
	else
	{
		if ( a >= b)
			UCNN(a-b,b);
		else
			UCNN(b-a,a);
	}
}

int Calculate (int Array[10])
{
	int temp = Array[0];
	for (int i = 1 ; i < 10 ; i++)
	{
		if (i == 9)
			return (temp * Array[i])/UCNN(temp , Array[i]);
		temp = UCNN(temp , Array[i]);

	}
}

int main()
{
	int Array[10];
	for (int i = 0 ; i < 10; i++)
		cin>>Array[i];
	cout<<Calculate(Array);
	return 0;
}*/