#include <iostream>
using namespace std;

bool Check (int Array[],int temp,int n)
{
	for (int i = n-1 ; i >= 0 ; i--)
		if (temp < Array[i])
			return false;
	return true;
}

int Calculate (int Array[10])
{
	int count = 0;
	for (int i = 0 ; i < 10 ; i++)
		if (Check (Array,Array[i],i))
			count++;
	return count;
}

int main(int argc, char const *argv[])
{
	int Array[10];
	for (int i = 0 ; i < 10 ; i++)
		cin>>Array[i];
	cout<<Calculate(Array);
	return 0;
}
