#include <iostream>
#include <cmath>
using namespace std;

bool Check (int n )
{
	if ( sqrt(n) * sqrt(n) == n)
		return true;
	return false;
}

int Calculate (int Array[10])
{
	int S = 0 ;
	for (int i = 0 ; i < 10 ; i++)
		if (Check(Array[i]))
		S += Array[i];
	return S;
}

int main(int argc, char const *argv[])
{
	int Array[10];
	for (int i = 0 ; i < 10 ; i++)
		cin>>Array[i];
	cout<<Calculate(Array);
	return 0;
}