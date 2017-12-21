#include <iostream>
using namespace std;

float Calculate (float Array[10])
{
	float Min = Array[0];
	for (int i = 0 ; i < 10 ; i++)
		if (Min > Array[i])
			Min = Array[i];
	return Min;
}

int main(int argc, char const *argv[])
{
	float Array[10];
	for (int i = 0 ; i < 10 ; i++)
		cin>>Array[i];
	cout<<Calculate(Array);
	return 0;
}