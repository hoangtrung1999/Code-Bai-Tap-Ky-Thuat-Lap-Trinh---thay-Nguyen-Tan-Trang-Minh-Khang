#include <iostream>
using namespace std;

int Calculate(int n)
{
	int S = 0;

	if (n == 1)
		S = 1;
	else if (n <= 0)
		S = 0;
	else
	{
		int i = 2;
		S = 1;
		while (i <= n)
		{
			S += i;
			i++;
		}
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
