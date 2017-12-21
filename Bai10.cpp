#include <iostream>
using namespace std;

int Calculate (int x , int n)
{
	int T = 1;
	for (int i = 1 ; i <= n ; i++)
	{
		T = T*x;
	}
	return T;
}

int main()
{
	int n;
	int x;
	cin>>x>>n;
	cout<<Calculate(x,n);
	return 0;
}