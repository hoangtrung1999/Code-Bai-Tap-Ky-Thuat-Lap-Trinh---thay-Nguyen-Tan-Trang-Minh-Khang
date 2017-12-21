#include <iostream>
using namespace std;

float Calculate(float Array[10])
{
	float Max = -1;
	for (int i = 0 ; i < 10 ; i++)
		if (Array[i] > Max && Array[i] < 0)
			Max = Array[i];
	if (Max == -1)
		return 0;
	else
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