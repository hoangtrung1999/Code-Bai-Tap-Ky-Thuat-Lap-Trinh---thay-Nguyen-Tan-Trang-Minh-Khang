#include <iostream>
using namespace std;

void Calculate (int n , int m)
{
	for (int i = 0 ; i < m ; i++)
	{
		if ( i > 0 && i < m-1)
		{
			cout<<"*";
			for(int j = 0 ; j < n -2 ; j++)
				cout<<" ";
			cout<<"*"<<endl;
		}
		else
		{
			for (int k = 0 ; k < n ; k++)
				cout<<"*";
			cout<<endl;
		}
	}
}

int main()
{
	int n, m;
	cin>>n>>m;
	Calculate(n,m);
	return 0;
}