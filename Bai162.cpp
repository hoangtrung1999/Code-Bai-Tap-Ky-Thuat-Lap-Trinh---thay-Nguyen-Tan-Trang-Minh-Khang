#include <iostream>
using namespace std;

float Calculate(float Array[10])
{
	for (int i = 1 ; i < 8 ; i++)
		if ( Array[i-1] * Array[i+1] == Array[i])
			return i;
	return -1;
}

int main()
{
	float Array[10];
	for (int i = 0 ; i < 10 ; i++)
		cin>>Array[i];
	cout<<Calculate(Array);
	return 0;
}