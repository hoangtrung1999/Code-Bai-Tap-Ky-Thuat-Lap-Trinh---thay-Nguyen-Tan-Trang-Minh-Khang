#include <iostream>
using namespace std;

float Calculate (float x , int n)
{
	float T = 0 ;
	float S = 0;
	for ( int i = 1 ; i <= n ; i++)
	{
		S += i;
		T += 1.0 / S;
	}
	return T;
}

int main()
{
	int n;
	float x;
	cout<<"Nhap x va n: "; 
	cin>>x;
	cin>>n;
	cout<<Calculate(x,n);
	
	return 0;
}