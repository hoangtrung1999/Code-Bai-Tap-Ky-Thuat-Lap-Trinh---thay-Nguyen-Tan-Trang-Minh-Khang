#include <iostream>
using namespace std;

int Calculate ()
{
	int S = 0;
	int i = 1;
	while (S <10000)
	{
		S += i;
		++i;
	}
	return i;
}

int main()
{
	cout<<Calculate();
	return 0;
}