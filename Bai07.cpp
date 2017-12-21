#include <iostream>
using namespace std;

int Calculate ( int n)
{
	float S = 0;
	for ( float i = 1 ; i <= n; i++)
	{
		S += i/(i+1);
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