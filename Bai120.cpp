#include <iostream>
#include <cmath>
using namespace std;
bool CheckCp (int n)
{
    if (n < 1) return false;
    if (sqrt(n) * sqrt(n) == n) 
        return true;
    return false;
}
 
void cp_smaller_than (int n)
{
    for (int i = n - 1 ; i >= 1; i--)
        if (CheckCp(i) == true) 
        	cout<<i<<endl;
}

int main()
{
	int n;
	cin>>n;
	cp_smaller_than(n);
	return 0;
}