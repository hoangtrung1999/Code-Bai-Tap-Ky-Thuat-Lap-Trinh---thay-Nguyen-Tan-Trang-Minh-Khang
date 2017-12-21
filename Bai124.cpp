#include <iostream>
using namespace std;

bool Calculate (int Array[10])
{
	for (int i = 0 ; i < 10 ; i++)
		if ( !(Array[i] & 1) && Array[i] < 2004 )
			return true;
	return false;
}

int main()
{
	int Array[10];
	for (int i = 0 ; i < 10 ; i++)
		cin>>Array[i];
	if (Calculate(Array))
		cout<<"Ton Tai Gia Tri Nho Hon 2004";
	else
		cout<<"Khong Ton Tai Gia Tri Nho Hon 2004";
	return 0;
}