#include <iostream>
#include <cmath>	
using namespace std;

float Calculate(int x , int n)
{
	return pow(x , 1.0/n);
}

int main()
{
	int x , n;
	cin>>x>>n;
	cout<<Calculate(x,n);
	return 0;
}