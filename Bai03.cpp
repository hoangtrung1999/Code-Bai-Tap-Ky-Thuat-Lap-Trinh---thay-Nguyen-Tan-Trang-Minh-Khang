#include <iostream>
using namespace std;

float Calculate (int n)
{
	float S = 0;
	for (int i = 1; i <= n ; i++)
	{
		S += 1/i;
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