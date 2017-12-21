#include <iostream>
using namespace std;

int Show (int Array[10], int j , int k)
{
	for (int i = j ; i <= k ; i++)
		cout<<Array[i]<<" ";
	return 0;
}

int Calculate (int Array[10])
{
	int S = 0;
	int a;
	int b;
	for (int j = 0 ; j < 10 ; j++)
	{
		int k = j ;
		int temp = 0;
		while (Array[k] > 0)
		{
			temp += Array[k];
			if (temp > S)
			{
				S = temp;
				a = j;
				b = k;
			}
			k++;
		}
	}
	Show (Array,a,b);
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