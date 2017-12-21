#include <iostream>
using namespace std;

int Calculate (int Array[])
{
	int temp = -1;
	for (int i = 0 ; i < 10 ; i++)
		if (Array[i] > 0)
			temp = Array[i];
	return temp;
}

int main()
{
	int Array[10];
	for (int i = 0 ; i < 10 ; i++)
		cin>>Array[i];
	cout<<Calculate(Array);
	return 0;
}