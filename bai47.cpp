#include <iostream>
using namespace std;

int Check (int n)
{
	int count = 0;
	while ( n / 10 != 0 )
	{
		if ( (n % 10)%2 == 0)
		count+= n % 10;
		n = n / 10;
	}
	if ( (n % 10)%2 == 0)
		count += n % 10;
	return count;
}

int main()
{
	int n;
	cin>>n;
	cout<<Check(n);
	return 0;
}