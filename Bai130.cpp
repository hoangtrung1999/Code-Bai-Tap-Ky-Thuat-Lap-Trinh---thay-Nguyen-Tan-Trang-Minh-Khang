#include <iostream>
using namespace std;

void Output(int Array[], int n)
{
	for (int i = 0 ; i < n ; i++)
		cout<<Array[i];
}

int main()
{
	float Array[10];
	Output(Array,10);
	return 0;
}