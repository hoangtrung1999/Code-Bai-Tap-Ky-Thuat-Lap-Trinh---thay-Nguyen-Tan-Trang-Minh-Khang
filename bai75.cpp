#include <iostream>
using namespace std;

bool Calculate (long n)
{
	while (!(n & 1) )
	{
			n /= 2;
	}
	if (n%10 == 1)
		return true;
	else 
		return false;
}

int main()
{
	long n;
	cin>>n;
	if (Calculate(n))
		cout<<"So n co dang 2^k";
	else
		cout<<"So n khong co dang 2^k";		
	return 0;
}