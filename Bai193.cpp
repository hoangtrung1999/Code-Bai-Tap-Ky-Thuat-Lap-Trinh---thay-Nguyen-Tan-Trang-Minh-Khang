#include <iostream>
using namespace std;

bool Check (long n)
{
	n = pow(n , 1.0 / (log2 (3.0)));
	while (!(n&1)) 
	{
			n /= 2;
	}
	if (fmod(n,10.0) == 1)
		return true;
	else 
		return false;
}

int Calculate (int Array[10])
{
	bool check = false;
	for (int i = 0 ; i < 10 ; i++)
		if (Check(Array[i]))
		{
			check = true;
			cout<<i<<endl;
		}
	if (check)
		return 1;
	else
		return 0; 
}

int main(int argc, char const *argv[])
{
	int Array[10];
	for (int i = 0 ; i < 10 ; i++)
		cin>>Array[i];
	Calculate(Array);
	return 0;
}