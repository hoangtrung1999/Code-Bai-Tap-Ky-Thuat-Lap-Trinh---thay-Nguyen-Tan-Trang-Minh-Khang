#include <iostream>
using namespace std;

void Calculate()
{
	for (int i = 2 ; i <= 9 ; i++)
	{
		for (int j = 1 ; j <= 10 ; j++)
		{
			cout<<i<<"*"<<j<<" = "<<i*j<<endl;
		}
		cout<<endl;
	}
}

int main()
{
	Calculate();
	return 0;
}