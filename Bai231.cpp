#include <iostream>
using namespace std;

int Calculate (int Array[10])
{
	int temp;
	bool check = true;
	for (int i = 0 ; i < 9 ; i++)
	{
		temp = Array[i];
		for (int j = i+1 ; j < 10 ; j++ )
			if ( Array[j] == Array[i])
				{
					check = false;
					break;
				}
		if (check == true)
			cout<<Array[i];
		else
			check = true;
	}
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
