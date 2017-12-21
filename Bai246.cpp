#include <iostream>
using namespace std;

int Calculate (int Array[],int n)
{
	if ( n & 1)
	{
		for (int i = 0 ; i < n/2 ; i++)
			for (int j = n ; j > n /2 ; j--)
				if (Array[i] != Array[j])
					return 0;
		return 1;
	}
	else
	{
		for (int i = 0 ; i < n/2 ; i++)
			for (int j = n ; j >= n /2 ; j--)
				if (Array[i] != Array[j])
					return 0;
		return 1;
	}
}

int main(int argc, char const *argv[])
{
	int Array[10];
	for (int i = 0 ; i < 10 ; i++)
		cin>>Array[i];
	cout<<Calculate(Array,n);
	return 0;
}
