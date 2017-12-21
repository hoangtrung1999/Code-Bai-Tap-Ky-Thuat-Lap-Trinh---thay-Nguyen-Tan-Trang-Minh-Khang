#include <iostream>
#include <cmath>
using namespace std;

float Calculate(int n)
{
	float  S = (float) 1 / 0.5;
	for (int i = 1 ; i <= n ; i++)
		S = 1 + (float) 1 / S;
	return S;
}

int main()
{
	int n;
	cin>>n;
	cout<<Calculate(n);
	return 0;
}