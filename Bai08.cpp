#include <iostream>
using namespace std;

int Calculate (int n)
{
	float S = 0;
	for ( float i = 0 ; i <= n; i++)
	{
		S += (2*i +1)/(2*i +2);
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