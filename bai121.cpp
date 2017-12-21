#include <iostream>
using namespace std;

int CheckDigit (int n)
{
	int count = 1;
	while ( n / 10 != 0 )
	{
		count++;
		n = n / 10;
	}
	return count;
}

int Power(int x , int n)
{
	int T = 1;
	for (int i = 0 ; i < n ; i++)
		T *= x;
	return T;

}

bool Calculate (int n)
{
	int temp = n;
	int S = 0;
	for (int i = 0 ; i < CheckDigit (n) ; i++)
	{
		S+= Power((temp%10),CheckDigit(n));
		temp = temp / 10;
	}

	if (S == n)
		return true;
	return false;
}

int main()
{
	int n;
	cin>>n;
	if(Calculate(n))
		cout<<"La so Amstrong";
	else
		cout<<"Khong la so Amstrong";
	return 0;
}