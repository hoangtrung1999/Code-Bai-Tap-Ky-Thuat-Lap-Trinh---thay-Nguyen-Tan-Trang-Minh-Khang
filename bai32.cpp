#include <iostream>
#include <cmath>
using namespace std;

bool Calculate(int n)
{
	int j;
	for (int i = 2 ; i <= sqrt(n) ; i++)
	{
		if ( n % i == 0)
		{
			j = n / i;
			if ( j == i)
				return true;
		}
	}
	
	return false;
}

int main()
{
	int n;
	cin>>n;
	if ( Calculate(n) )
		cout<<"So chinh phuong";
	else 
		cout<<"Khong phai so chinh phuong";
	return 0;
}
