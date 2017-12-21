#include <iostream>
#include <cmath>
using namespace std;

float Calculate( float a, float b , float c)
{
	if ( a == 0)
	{
		if ( b == 0 && c != 0 )
		{
			cout<<"He Vo Nghiem";
			return 0;
		} 
		else
		{
			cout<<"He Vo So Nghiem";
			return 0;
		}
	}
	else
	{
		float delta = pow(b,2) - 4 * a * c;
		if (delta < 0) cout<<"He Vo Nghiem";
		else if (delta == 0) cout<<"X = "<<(-b/2*a);
		else if (delta > 0) 
		{
			cout<<"X1 = "<<(-b-sqrt(delta))/(2*a)<<endl;
			cout<<"X2 = "<<(-b+sqrt(delta))/(2*a);
		}
	}
	return 0;
}

int main()
{
	float a , b , c;
	cin>>a>>b>>c;
	Calculate(a,b,c);
	return 0;
}