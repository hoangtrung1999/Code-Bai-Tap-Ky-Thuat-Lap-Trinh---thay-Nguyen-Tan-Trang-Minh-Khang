#include <iostream>
using namespace std;

void Input(int Array[], int n)
{
	for (int i = 0 ; i < n ; i++)
		cin>>Array[i];
}

int main()
{
	float Array[10];
	Input(Array,10);
	return 0;
}