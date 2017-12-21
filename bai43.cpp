#include <iostream>
using namespace std;

int Check (int n)
{
	int count = 1;
	while ( n / 10 != 0 )
	{
		count++;
		n = n / 10;
	}
	return count;
}

int main()
{
	int n;
	cin>>n;
	cout<<Check(n);
	return 0;
}