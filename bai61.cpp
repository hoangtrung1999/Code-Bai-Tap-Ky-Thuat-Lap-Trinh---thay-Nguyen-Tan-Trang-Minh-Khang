#include <iostream>
using namespace std;

int CountDigit(int n)
{
	int count = 0;
	while ( n / 10 != 0)
	{
		count++;
		n = n / 10;
	}
	if ( n % 10 != 0 ) count++;
	return count;
}

int Power (int n , int x)
{
	int T = 1; 
	for (int i = 0 ; i < x ; i++)
		T *= n;
	return T;
}

bool Calculate (int n )
{
	int temp;
	for (int i = (CountDigit(n) - 1) ; i >= 1 ; i--)
	{
		int a = n / Power (10,CountDigit(n) - 1);
		n -= a * Power(10,CountDigit(n) - 1);
		int b = n / Power (10,CountDigit(n) - 1);
		if ( a <= b)
			return false;
	}
	
	return true;
}

int main()
{
	int n;
	cin>>n;
	if ( Calculate(n) )
		cout<<"Giam dan";
	else 
		cout<<"Khong giam dan";
	return 0;
}