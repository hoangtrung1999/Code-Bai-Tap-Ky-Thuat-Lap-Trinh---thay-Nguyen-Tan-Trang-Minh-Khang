#include <iostream>
#include <math.h>
using namespace std;

float Calculate (int n)
{
	float S = 0;
	for (int i = 1 ; i <= n ; i++)
	{
		S += pow(i,2.0);		
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