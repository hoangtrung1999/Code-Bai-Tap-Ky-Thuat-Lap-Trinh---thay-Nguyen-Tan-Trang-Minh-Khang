#include <iostream>
using namespace std;

int Sort (float a , float b , float c)
{
	float Max = a ;
	if ( b > Max && c < b)
	{
		cout<< (a<c?a:c)<<" "<< (a<c?c:a) <<" "<<b;
	}
	else if (c > Max)
	{
		cout<< (b<a?b:a)<<" "<< (b<a?a:b) <<" "<<c;
	}
	else
	{
		cout<< (b<c?b:c)<<" "<< (b<c?c:b) <<" "<<a;
	}
	return 0;
}

int main()
{
	float a , b , c;
	cin>>a>>b>>c;
	Sort(a,b,c);
	return 0;
}