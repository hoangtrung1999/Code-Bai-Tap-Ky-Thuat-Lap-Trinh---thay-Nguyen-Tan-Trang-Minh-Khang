#include <iostream>
using namespace std;

void Calculate (float Array[])
{
	float ArrayB[10];
	int count = 0;

	for (int i = 0 ; i < 10 ; i++)
		if ((Array[i]) < 0)
		{
			ArrayB[count] = i;
			++count;
		}
	for (int j = 0 ; j < count ; j++)
		cout<<ArrayB[j]<<" ";
}

int main()
{
	float Array[10];
	for (int i = 0 ; i < 10 ; i++)
		cin>>Array[10];
	Calculate(Array);
	return 0;
}