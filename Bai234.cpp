#include <iostream>
using namespace std;

int Calculate (int Array[10], int ArrayB[10])
{
	int count = 0;
	bool Check = true;
	for (int i = 0 ; i < 10 ; i++)
	{
		for (int j = 0 ; j < 10 ; j++)
			if ( ArrayB[j] == Array[i])
			{
				Check = false;
				break;
			}
		if (Check == true)
			count++;
		else
			Check = true;
	}
	for (int i = 0 ; i < 10 ; i++)
	{
		for (int j = 0 ; j < 10 ; j++)
			if ( ArrayB[i] == Array[j])
			{
				Check = false;
				break;
			}
		if (Check == true)
			count++;
		else
			Check = true;
	}
	return count;
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
