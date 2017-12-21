#include <iostream>
using namespace std;

float Calculate (float Array[10])
{
	float Max = Array[0];
	for (int i = 0 ; i < 10 ; i++)
		if (Array[i] > Max)
			Max = Array[i];
	for (int i = 0 ; i < 10 ; i++)
		if ( Array[i] == Max)
			cout<<i<<endl;
	return 0;
}

int main(int argc, char const *argv[])
{
	float Array[10];
	for (int i = 0 ; i < 10 ; i++)
		cin>>Array[i];
	Calculate(Array);
	return 0;
}