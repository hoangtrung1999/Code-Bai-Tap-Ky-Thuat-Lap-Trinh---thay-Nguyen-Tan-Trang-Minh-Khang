#include <iostream>
using namespace std;

int Calculate (int Array[10], int ArrayB[10])
{
	int j = 9; // n - 1
	for (int i = 0 ; i < 10 ; i++)
	{
		if ( Array[i] != ArrayB[j])
			return 0;
		j--;
	}
	return 1;
}

int main(int argc, char const *argv[])
{
	int Array[10];
	int ArrayB[10];
	cout<<"Nhap mang A:";
	for (int i = 0 ; i < 10 ; i++)
		cin>>Array[i];
	cout<<"Nhap mang B:";
	for (int j = 0 ; j < 10 ; j++)
		cin>>ArrayB[j];
	cout<<Calculate(Array,ArrayB);
	return 0;
}
