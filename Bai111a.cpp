#include <iostream>
using namespace std;

void Calculate (int h)
{
	int temp = h - 1;
	int temp1 = 1;
	for (int i = 0 ; i < h ; i++)
	{
		for (int j = 0 ; j < temp ; j++)
			cout<<" ";
		for (int k = 0 ; k < temp1 ; k++)
			cout<<"*";
		temp1+= 2;
		temp--;
		cout<<endl;
	}
}

int main()
{
	int n;
	cin>>n;
	Calculate(n);
	return 0;
}