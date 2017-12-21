#include <iostream>
using namespace std;

void Calculate()
{
	for (int i = 1 ; i < 100 ; i += 2)
		if ( (i != 5 ) && (i != 7 ) && ( i != 93))
			cout<<i<<endl;
}

int main()
{
	Calculate();
	return 0;
}