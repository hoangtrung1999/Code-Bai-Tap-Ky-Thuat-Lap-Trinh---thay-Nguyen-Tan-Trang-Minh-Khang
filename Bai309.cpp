#include <iostream>
using namespace std;

int Calculate (int Array[10])
{
	int ArrayB [10];
	for (int i = 0 ; i < 10 ; i++)
		{
			if (i == 0)
				ArrayB[i] = Array[i+1];
			else if ( i == 9 )
				ArrayB[i] = Array[i-1];
			else
			ArrayB[i] = Array[i+1] + Array[i-1];
		}
	/*
	for (int i = 0 ; i < count ; i++)
		cout<<ArrayB[i];
	*/
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