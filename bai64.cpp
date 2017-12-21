#include <iostream>
using namespace std;

float Calculate(float a , float b)
{
	if ( a == 0)
	{
		if ( b == 0 ) cout<<"He Vo So Nghiem";
		else cout<<"He Vo Nghiem";
	}
	else
		return (-b/a);
}

int main()
{
	float a , b;
	cin>>a>>b;
	cout<<Calculate(a,b);
	return 0;
}