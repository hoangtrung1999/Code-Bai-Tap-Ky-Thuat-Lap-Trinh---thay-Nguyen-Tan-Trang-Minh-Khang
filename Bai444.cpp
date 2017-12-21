#include <iostream>
using namespace std;

int Calculate (int Array[10][10])
{
	int Min = Array[1][0];
	for (int i = 0 ; i < 10 ; i++)
		for (int j = 0 ; j < 10 ; j++)
			if ( i != j && i > j && Min > Array[i][j])
				Min = Array[i][j];
	return Min;
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
