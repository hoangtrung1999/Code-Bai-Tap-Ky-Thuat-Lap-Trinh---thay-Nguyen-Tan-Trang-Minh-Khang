#include <iostream>
using namespace std;

int Calculate (int Array[10])
{
	int Chan = 0;
	int Le = 0;
	for (int i = 0 ; i < 10 ; i++)
	{
		if ( Array[i] & 1)
			Le++;
		else
			Chan++;
	}
	if (Chan == Le)
		return 0;
	else if ( Chan > Le)
		return -1;
	else
		return 1;
}

int main(int argc, char const *argv[])
{
	int Array[10];
	for (int i = 0 ; i < 10 ; i++)
		cin>>Array[i];
	cout<<Calculate(Array);
	return 0;
}