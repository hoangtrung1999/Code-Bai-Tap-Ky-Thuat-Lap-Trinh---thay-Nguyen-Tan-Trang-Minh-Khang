#include <iostream>
using namespace std;

bool Check(int n)
{
	while ( n / 10 != 0)
	{
		if ( (n%10) % 2 == 0)
			return false;
	}
	return true;
}

int main()
{
	int n;
	cin>>n;
	cout<<Check(n);
	return 0;
}