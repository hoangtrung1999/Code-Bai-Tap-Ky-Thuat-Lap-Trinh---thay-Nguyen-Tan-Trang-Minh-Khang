#include <iostream>
using namespace std;

float Calculate ( int n)
{
	float S = 0;
	for ( float i = 0 ; i <= n; i++)
	{
		S += 1/(2*i+1);
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