#include <iostream>
using namespace std;

bool Calculate(long a, long b)
{
	if ( a * b >= 0 ) return true;
	else return false;
}

int main()
{
	long a , b;
	cin>>a>>b;
	if (Calculate(a,b))
		cout<<"Hai So Cung Dau";
	else 
		cout<<"Hai So Trai Dau";
	return 0;
}