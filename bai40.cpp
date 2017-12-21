#include <iostream>
#include <cmath>
using namespace std;


float Calculate (int x , int n)
{
	if ( n == 1 ) return x;
	else 
	{
		return sqrt ( pow(x,n) + Calculate(x,n-1));
	}
}

int main()
{
	int x,n;
	cin>>x>>n;
	cout<<Calculate(x,n);
	return 0;

}