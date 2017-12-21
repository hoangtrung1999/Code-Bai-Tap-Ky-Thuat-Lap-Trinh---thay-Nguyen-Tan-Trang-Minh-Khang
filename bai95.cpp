#include <iostream>
using namespace std;

long Calculate ( long a)
{
	if ( a < 0) return -a;
	else return a;
}

int main()
{
	long a , b , c;
	cin>>a>>b>>c;
	cout<<Calculate(a)<<endl;
	cout<<Calculate(b)<<endl;
	cout<<Calculate(c);
	return 0;
}