#include <iostream>
using namespace std;

bool Calculate ( int n )
{
	int S = 0;
	for (int i = 1; i < n ; i++)
	{
		if ( n % i == 0 )
			S = S + i;
	}
	if ( S == n) 
		return true ; 
	else 
		return false;
}
int main()
{
	int n;
	cin>>n;
	if (Calculate (n))
		cout<<"So Hoan Thien";
	else 
		cout<<"Khong phai So Hoan Thien";
	return 0;
}