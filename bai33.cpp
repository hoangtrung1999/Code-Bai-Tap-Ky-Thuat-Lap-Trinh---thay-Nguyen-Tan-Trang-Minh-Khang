#include <iostream>
#include <cmath>
using namespace std;

float Calculate(int n)
{
	float S = sqrt(2);
	for (int i = 1 ; i <= n ; i++)
		S = sqrt(  2 + S);
	return S;
}

int main()
{
	int n;
	cin>>n;
	cout<<Calculate(n);
	return 0;
}