#include <iostream>
using namespace std;

int Calculate (int Array[10])
{
	for (int i = 0 ; i < 8 ; i++)
		if (Array[i] == 0 && Array[i+1] == 0)
			return 1;
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