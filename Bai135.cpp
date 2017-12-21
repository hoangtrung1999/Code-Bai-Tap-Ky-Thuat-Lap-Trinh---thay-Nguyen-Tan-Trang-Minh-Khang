#include <iostream>
using namespace std;

float Calculate (float Array[10])
{
	for (int i = 0 ; i < 10 ; i++)
		if ( Array[i] > 0 )
			return Array[i];
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