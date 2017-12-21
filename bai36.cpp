#include <iostream>
#include <cmath>
using namespace std;

int GiaiThua (int n)
{
	if (n == 0) 
		return 1;
	else 
		return n * GiaiThua(n-1);
}

float Calculate (int n)
{
	float S = 0;
	float temp = 0;
	for (int i  = 1 ; i <= n ; i++)
	{		
		S = sqrt ( GiaiThua(i) + temp);
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