#include <iostream>
using namespace std;

int Calculate (int Array [10])
{
	int temp;
	for (int i = 0 ; i < 8 ; i++)
		for (int j = i + 1 ; j < 10 ; j++)
			if (Array[i] < Array[j])
			{
				temp = Array[i];
				Array[i] = Array[j];
				Array[j] = temp;
			}
	for (int i = 0 ; i < 10 ; i++)
		cout<<Array[i];
	return 0;
}

int main()
{
	float Array[10];
	for (int i = 0 ; i < 10 ; i++)
		cin>>Array[i];
	Calculate(Array);
	return 0;
}