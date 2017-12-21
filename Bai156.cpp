#include <iostream>
#include <cmath>
using namespace std;

float Calculate (float Array[], float x)
{
	float ArrayB[10];
	float Min;
	int Address;
	//Copy array
	for (int i = 0 ; i < 10 ; i++)
		ArrayB[i] = Array[i];
	// Calculate distance
	for (int k = 0 ; k < 10 ; k++)
	{
		if (ArrayB[k] * x < 0)
			ArrayB[k] = abs(ArrayB[k]) + abs(x);
		else
			ArrayB[k] = abs(ArrayB[k] - x);
	}
	// Find the max element
	Min = ArrayB[0];
	Address = 0;
	for (int j = 0 ; j < 10 ; j++)
		if (Min > ArrayB[j])
		{
			Min = ArrayB[j];
			Address = j;
		}
	return Array[Address];
}

int main()
{
	float Array[10];
	float x;
	cout<<"Nhap x: ";
	cin>>x;
	cout<<"Nhap Mang: ";
	for (int i = 0 ; i < 10; i++)
		cin>>Array[i];
	cout<<Calculate(Array,x);
	return 0;
}