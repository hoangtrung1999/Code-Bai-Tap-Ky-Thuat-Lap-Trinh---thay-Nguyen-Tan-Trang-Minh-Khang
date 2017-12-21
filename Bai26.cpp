#include <iostream>
using namespace std;

int Calculute (int n)
{
	int T = 1;
	for (int i = 1; i <= n ; i++)
	{
		if ( n % i == 0 && i%2 != 0)
			T = T*i;
	}
	return T;
}

int main()
{
	int n;
	cin>>n;
	cout<<Calculute(n);
	return 0;
}