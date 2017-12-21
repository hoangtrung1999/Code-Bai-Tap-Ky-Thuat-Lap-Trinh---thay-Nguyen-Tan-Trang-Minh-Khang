#include <iostream>
#include <cmath>
using namespace std;

int Calculate (int Array[10])
{
	for (int i = 0 ; i < 8 ; i++)
		if ( Array[i] > abs(Array[i+1]))
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