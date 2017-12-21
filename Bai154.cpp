#include <iostream>
using namespace std;

int Calculate (int Array[])
{
	int temp = 1;
	for (int i = 0 ; i < 10 ; i++)
		if (Array[i] < 0)
		{
			temp = Array[i];
			break;
		}
	if (temp == 1)
		return -1;
	else
	{
		int address;
		for (int j = 0 ; j < 10 ; j++)
			if (Array[i] < temp && Array[i] < 0)
			{
				temp = Array[i];
				address = i;
			}
		return address;
	}
}

int main()
{
	int Array[10];
	for (int i = 0 ; i < 10 ; i++)
		cin>>Array[i];
	cout<<Calculate(Array);
	return 0;
}