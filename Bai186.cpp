#include <iostream>
using namespace std;

int Calculate (float Array[10])
{
	float temp;
	for (int i = 0 ; i < 10 ; i++)
		if (Array[i] < 0)
		{
			temp = Array[i];
			break;
		}
	for (int i = 0 ; i < 10 ; i++)
		if (Array[i] == temp)
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