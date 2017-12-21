#include <iostream>
using namespace std;

void Calculate (int n , int m)
{
	for (int i = 0 ; i < m ; i++)
	{
			for (int j = 0 ; j < n ; j++)
				cout<<"*";
			cout<<endl;
	}
}

int main()
{
	int n, m;
	cin>>n>>m;
	Calculate(n,m);
	return 0;
}