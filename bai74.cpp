#include <iostream>
using namespace std;

float Power (int x , int n)
{
	float T = 1;
	for (int i = 0 ; i < n ; i++)
		T *= x;
	return T;
}

int GiaiThua (int n)
{
	if (n == 0) 
		return 1;
	else 
		return n * GiaiThua(n-1);
}

float Calculate(int x , int n )
{
	float S = 1;
	for (int i = 0 ; i <= n ; i++)
		S += Power(-1,i+1) * ( Power(x,2*i+1)/GiaiThua(2*i+1) );
	return S;

}
int main()
{
	int x,n;
	cin>>x>>n;
	cout<<Calculate(x,n);
	return 0;
}