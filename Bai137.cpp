#include <iostream>
using namespace std;

int Calculate (float Array[10])
{
	float Min = Array[0];
	int Address = 0;
	for (int i = 1 ; i < 10 ; i++)
		if ( Min > Array[i])
		{
			Min = Array[i];
			Address = i;
		}
	return Address;
}

int main()
{
	float Array[10];
	for (int i = 0 ; i < 10 ; i++)
		cin>>Array[i];
	cout<<Calculate(Array);
	return 0;
}