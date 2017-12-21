#include <iostream>
using namespace std;

int Calculate ( int n)
{
	int C = 0;
	for (int i = 1 ; i <=n ; i++)
	{
		if (n%i == 0 && i%2 == 0)
			C++;
	}
	return C;
}

int main()
{
	int n;
	cin>>n;
	Calculate(n);
	cout<<Calculate;
	return 0;
}