#include <iostream>
#include <cmath>
using namespace std;

float Calculate (int n)
{
	float S = 0;
	float temp = 0;
	for (int i  = 1 ; i <= n ; i++)
	{		
		S = sqrt ( i + temp);
		temp = S;
	}
	return S;
}

int main()
{
	int n;
	cin>>n;
	cout<<Calculate(n);
	return 0;
}