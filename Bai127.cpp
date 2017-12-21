#include <iostream>
using namespace std;

void Calculate (int Array[10])
{
	int temp;
	for (int i = 0 ; i < 9 ; i++)
		for (int j = i + 1 ; j < 10 ; j++)
			if ( Array[i] > Array[j])
			{
				temp = Array[i];
				Array[i] = Array[j];
				Array[j] = temp;
			}
	for (int k = 0 ; k < 10 ; k++)
		cout<<Array[k]<<" ";
}

int main()
{
	int Array[10];
	for (int i = 0 ; i < 10 ; i++)
		cin>>Array[i];
	Calculate(Array);
	return 0;
}