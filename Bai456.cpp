#include <iostream>
using namespace std;

int Calculate (int Array[10][10])
{
	int temp = Array[0][0];
	for (int i = 1 ; i < 10 ; i++)
		if (Array[i][i] < temp)
				return 0;
	return 1;
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
