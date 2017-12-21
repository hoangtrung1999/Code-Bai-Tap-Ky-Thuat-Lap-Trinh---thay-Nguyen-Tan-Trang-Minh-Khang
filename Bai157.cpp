#include <iostream>
using namespace std;

float FindMin (float Array[])
{
	float Min = Array[0];
	for (int i = 0 ; i < 10;i++)
		if (Min > Array[i])
			Min = Array[i];
	return Min;
}

float FindMax (float Array[])
{
	float Max = Array[0];
	for (int i = 0 ; i < 10;i++)
		if (Max < Array[i])
			Max = Array[i];
	return Max;
}

int main(int argc, char const *argv[])
{
	float Array[10];
	for (int i = 0 ; i < 10 ; i++)
		cin>>Array[i];
	cout<<"Doan chua tat ca gia tri trong mang la: ["<<FindMin(Array)<<","<<FindMax(Array)<<"]";
	return 0;
}