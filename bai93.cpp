#include <iostream>
#include <cmath>
using namespace std;

bool Calculate (int n)
{
	for ( int i = 2 ; i <= sqrt(n) ; i++)
		if ( n % i == 0)
			return false;
	return true;
}

int main()
{
	int n;
	cin>>n;
	if (Calculate(n))
		cout<<"So nguyen to";
	else
		cout<<"Khong phai so nguyen to";		
	return 0;
}