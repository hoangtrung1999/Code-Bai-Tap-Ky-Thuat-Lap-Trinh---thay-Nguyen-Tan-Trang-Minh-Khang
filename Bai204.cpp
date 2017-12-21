#include <iostream>
using namespace std;

float Calculate (float Array[10])
{
	float S = 0;
	for (int i = 1 ; i < 10 ; i++)
		if (Array[i] > Array[i-1])
			S += Array[i];
	return S;
}

int main(int argc, char const *argv[])
{
	float Array[10];
	for (int i = 0 ; i < 10 ; i++)
		cin>>Array[i];
	cout<<Calculate(Array);
	return 0;
}