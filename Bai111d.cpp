#include <iostream>
using namespace std;

void Calculate (int h)
{
	cout<<"*"<<endl;
	cout<<"**"<<endl;
	for (int i = 3 ; i < h ; i++)
	{
		cout<<"*";
		for (int j = 0 ; j < i -2 ; j++)
			cout<<" ";
		cout<<"*"<<endl;
	}
	for (int k = 0 ; k < h ; k++)
		cout<<"*";
}

int main()
{
	int n;
	cin>>n;
	Calculate(n);
	return 0;
}