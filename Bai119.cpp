#include <iostream>
using namespace std;
bool CheckPrime (int n)
{
    if (n <= 1) return false;
    for (int i = 2 ; i < n ; i++)
        if ( n % i == 0) return false;
    return true;
}
 
void prime_smaller_than (int n)
{
    for (int i = n - 1 ; i >= 1; i--)
        if (CheckPrime(i) == true) 
        	cout<<i<<endl;
}

int main()
{
	int n;
	cin>>n;
	prime_smaller_than(n);
	return 0;
}