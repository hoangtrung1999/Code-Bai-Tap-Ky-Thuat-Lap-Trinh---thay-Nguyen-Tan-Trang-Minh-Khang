#include <iostream>
using namespace std;

bool Check (int n)
{
	int S = 0 ;
	for (int i = 1 ; i < n ; i++)
		if (n % i == 0)
			S += i;
	if (S == n)
		return true;
	return false;
}

int Calculate (int Array[])
{
	int temp = -1;
	for (int i = 0 ; i < 10 ; i++)
		if (Check(Array[i]))
			temp = Array[i];
	return temp;
}

int main()
{
	int Array[10];
	for (int i = 0 ; i < 10 ; i++)
		cin>>Array[i];
	cout<<Calculate(Array);
	return 0;
}