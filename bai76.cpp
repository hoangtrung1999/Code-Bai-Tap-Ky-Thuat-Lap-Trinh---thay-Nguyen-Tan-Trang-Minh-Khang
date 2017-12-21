#include <iostream>
#include <cmath>
using namespace std;
// Chuyen 3^K = (2^K)^ (log2 (3) )
bool Calculate (long n)
{
	n = pow(n , 1.0 / (log2 (3.0)));// Test case n = 27 , sau buoc nay n = 8
	while (!(n&1)) // => Khong nhay vao vong lap => Sai => Bo tay
	{
			n /= 2;
	}
	if (fmod(n,10.0) == 1)
		return true;
	else 
		return false;
}

int main()
{
	long n;
	cin>>n;
	if (Calculate(n))
		cout<<"So n co dang 3^k";
	else 
		cout<<"So n khong co dang 3^k";
	return 0;
}