#include <iostream>
#include <cmath>
using namespace std;

int GiaiThua (int n)
{
	if (n == 1) 
		return 1;
	else 
		return n * GiaiThua(n-1);
}

float Calculate (int n)
{
	if ( n == 1 ) 
		return 1;
	else 
	{
		return pow(GiaiThua(n) + Calculate(n-1), 1.0/(n+1));
	}
}

int main()
{
	int n;
	cin>>n;
	cout<<Calculate(n);
	return 0;

}