#include <iostream>
#include <cmath>
using namespace std;

float Calculate (float Array[10])
{
	float Max = abs(Array[0]);
	for (int i = 1 ; i < 10 ; i++)
		if (Max < abs(Array[i]))
			Max = Array[i];
	return Max;
}

int main()
{
	float Array[10];
	for (int i = 0 ; i < 10 ; i++)
		cin>>Array[i];
	cout<<Calculate(Array);
	return 0;
}