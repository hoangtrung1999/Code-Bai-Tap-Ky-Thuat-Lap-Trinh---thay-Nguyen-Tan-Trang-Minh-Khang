#include <iostream>
using namespace std;

int Calculate (int n)
{
	int S = 0;
	int i = 0;
	while (S + i < n)
	{
		S += i;
		i++;
	}
	return i-1;

}

int main()
{
	int n;
	cin>>n;
	cout<<Calculate(n);
	return 0;
}