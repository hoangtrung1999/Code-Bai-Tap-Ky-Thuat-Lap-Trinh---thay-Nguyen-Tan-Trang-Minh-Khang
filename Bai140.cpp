#include <iostream>
using namespace std;

float Calculate (float Array[10])
{
	float Min;
	for (int i = 0 ; i < 10 ; i++)
		if ( Array[i] > 0 )
			{
				Min = Array[i];
				break;
			}
	for (int j = 0 ; j < 10 ; j++)
		if ( Min > Array[i])
			Min = Array[i];
	if ( Min < 0)
		return -1;
	return Min;
}

int main(int argc, char const *argv[])
{
	float Array[10];
	for (int i = 0 ; i < 10 ; i++)
		cin>>Array[i];
	cout<<Calculate(Array);
	return 0;
}