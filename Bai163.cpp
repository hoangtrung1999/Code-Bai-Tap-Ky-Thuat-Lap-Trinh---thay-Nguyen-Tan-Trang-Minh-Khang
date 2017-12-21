#include <iostream>
#include <cmath>
using namespace std;

int Calculate(int Array[10])
{
	for (int i = 0 ; i < 10 ; i++)
		if ( sqrt(Array[i]) * sqrt(Array[i]) == Array[i])
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