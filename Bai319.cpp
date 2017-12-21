#include <iostream>
using namespace std;

int Calculate (int Array[][])
{
	int ArrayB[100];
	int count = 0;
	for (int i = 0 ; i < 10 ; i++)
		for (int j = 0 ; j < 10 ; j++)
		{
				ArrayB[count] = Array[i][j];
				count++;
		}
	for (int i = 0 ; i < count - 1 ; i++ )
		for (int j = 1 ; j < count - 2; j++)
		{
			if (ArrayB[i] > ArrayB[j])
			{
				int temp = ArrayB[i];
				ArrayB[i] = ArrayB[j];
				ArrayB[j] = temp;
			}
		}
		count = 0;
	for (int i = 0 ; i < 10 ; i++)
		for (int j = 0 ; j < 10 ; j++)
		{
				Array[i][j] = ArrayB[count];
				count++;
		}
}

int main(int argc, char const *argv[])
{
	int Array[10][10];
	for (int i = 0 ; i < 10 ; i++)
		for (int j = 0 ; j < 10 ; j++)
		cin>>Array[i][j];
	cout<<Calculate(Array);
	return 0;
}
