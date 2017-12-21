#include <iostream>
using namespace std;

int Calculate (int Array[10])
{
	int temp;
	int Min;

	for (int i = 0 ; i < 10 ; i++)
		if (Min > Array[i])
		{
			Min = Array[i];
			temp = i;
		}
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
