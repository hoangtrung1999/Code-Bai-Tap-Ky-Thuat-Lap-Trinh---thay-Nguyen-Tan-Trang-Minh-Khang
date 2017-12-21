#include <iostream>
using namespace std;

int Calculate (int Array[10])
{
	int count = 0 ; 
	int ArrayB [10];
	for (int i = 0 ; i < 10 ; i++)
		if (Array[i]&1)
		{
			ArrayB[count] = Array[i];
			count++;
		}
	/*
	for (int i = 0 ; i < count ; i++)
		cout<<ArrayB[i];
	*/
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