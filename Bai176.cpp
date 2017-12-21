#include <iostream>
using namespace std;

int Calculate (int Array[10])
{
	for (int i = 0 ; i < 10 ; i++)
		if (Array[i] < 0)
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