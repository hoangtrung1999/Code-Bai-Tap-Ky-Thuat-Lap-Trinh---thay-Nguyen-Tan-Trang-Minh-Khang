#include <iostream>
using namespace std;

int Check (int n)
{
	int count = 1;
	bool isOdd = false;
	while ( n / 10 != 0 )
	{
		if ( (n % 10)%2 != 0)
		{
			count *= n % 10;
			isOdd = true;
		}
		n = n / 10;
	}
	if ( (n % 10)%2 != 0)
		count *= n % 10;
	if (isOdd == true)
		return count;
	else 
		return 0;
}

int main()
{
	int n;
	cin>>n;
	cout<<Check(n);
	return 0;
}