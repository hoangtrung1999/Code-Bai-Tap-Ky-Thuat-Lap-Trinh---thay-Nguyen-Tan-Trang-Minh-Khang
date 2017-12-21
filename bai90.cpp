#include <iostream>
using namespace std;

int Calculate (int n)
{
	int S = 0;
	int i = 1;
	while ( S < n)
	{
		S += i;
		cout<<S<<endl;
		if ( S < n)
		++i;
		cout<<i<<endl;
	}
	return i-1;
}

int main()
{
	int N;
	cin>>N;
	cout<<Calculate(N);
	return 0;
}