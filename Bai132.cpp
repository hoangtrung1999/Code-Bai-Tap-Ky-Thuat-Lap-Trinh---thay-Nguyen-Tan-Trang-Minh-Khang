#include <iostream>
using namespace std;

void Calculate (int Array[10])
{
	int ArrayB[10];
	int count = 0;

	for (int i = 0 ; i < 10 ; i++)
		if (!(Array[i] & 1))
		{
			cout<<Array[i]<<endl;
			ArrayB[count] = Array[i];
			++count;
		}
	for (int j = 0 ; j < count ; j++)
		cout<<ArrayB[j]<<" ";
}

int main()
{
	int Array[10];
	for (int i = 0 ; i < 10 ; i++)
		cin>>Array[10];
	Calculate(Array);
	return 0;
}