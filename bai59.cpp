#include <iostream>
using namespace std;

int CountDigit (int n)
{
	int count = 0;
	while ( n / 10 != 0 )
	{
		n = n / 10;
		++count;
	}
	if ( n % 10 != 0) ++count;
	return count;
}

int Power (int n , int x)
{
	int T = 1;
	for (int i = 0 ; i < x ; i++)
	{
		T *= n;
	}
	return T;
}

bool Calculate (int n)
{
	int j = CountDigit(n) -1;
	if ( j <= 0 )
	{
		cout<<"Input khong hop le";
		return false;
	}
	int count = 1;
	for (int i = 1 ; count <= CountDigit(n) ;)
	{
		if ( n % Power(10,i) != n / Power (10,j) )
			return false;
		else
		{
			n -= (n / Power (10,j)) * Power (10,j);
			n = n / Power(10,i);
			//cout<<n<<endl;
		}
		j = CountDigit(n) -1;
		count++;
	}
	
	return true;
}

int main()
{
	int n;
	cin>>n;
	if (Calculate(n))
		cout<<"Day la so doi xung";
	else 
		cout<<"Khong phai so doi xung";
	return 0;
}