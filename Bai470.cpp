#include <iostream>
using namespace std;

int Calculate (int Array[10][10], int ArrayB[10][10])
{
	for (int i = 0 ; i < 10 ; i++)
		for (int j = 0 ; j < 10 ; j++)
			if ( i != j && i > j && Min > Array[i][j])
				Array[i][j] -= ArrayB[i][j];
	return 0;
}

int main(int argc, char const *argv[])
{
	int Array[10][10];
	cout<<"Nhap ma tran A: ";
	for (int i = 0 ; i < 10 ; i++)
		for (int j = 0 ; j < 10 ; j++)
		cin>>Array[i][j];

	int ArrayB[10][10];
	cout<<"Nhap ma tran B: ";
	for (int i = 0 ; i < 10 ; i++)
		for (int j = 0 ; j < 10 ; j++)
		cin>>ArrayB[i][j];
	Calculate(Array,ArrayB);

	return 0;
}
