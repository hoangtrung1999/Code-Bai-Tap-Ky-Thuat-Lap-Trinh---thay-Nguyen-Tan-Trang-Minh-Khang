#include <iostream>
using namespace std;

float Calculate (float Array[10])
{
	float S = 0 ;
	int count = 0;
	for (int i = 0 ; i < 10 ; i++)
		if (Array[i] > 0)
		{
			S += Array[i];
			count++;
		}			

	return S/count;
}

int main(int argc, char const *argv[])
{
	float Array[10];
	for (int i = 0 ; i < 10 ; i++)
		cin>>Array[i];
	cout<<Calculate(Array);
	return 0;
}