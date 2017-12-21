#include <iostream>
using namespace std;

int Calculate (int n)
{
	int count = 0;
	int temp = n;
	// 1000 ; 2000 ; 5000
	// n = 1000*a + 2000*b + 5000*c
	for (int i = 1 ; i <= n / 1000 ; i++)
	{
		temp = n;
		if ( i*1000 == temp)
			count++;
		else
		{
			temp -= i*1000;
			for (int j = 1 ; )
		}

	}
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	cout<<Calculate(n);
	return 0;
}
