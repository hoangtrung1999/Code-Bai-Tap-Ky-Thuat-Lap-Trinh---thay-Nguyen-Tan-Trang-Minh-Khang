#include <iostream>
using namespace std;

int Calculate (int Array[])
{
	int temp = 0;
	for (int i = 0 ; i < 10 ; i++)
		if ( Array[i] < 0)
		{
			temp = Array[i];
			break;
		}
	if (temp == 0)
		return 0;
	else
	{
		for (int j = 0 ; j < 10 ; j++)
			if (temp < Array[i] && Array[i] < 0)
				temp = Array[i];
		return temp;
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