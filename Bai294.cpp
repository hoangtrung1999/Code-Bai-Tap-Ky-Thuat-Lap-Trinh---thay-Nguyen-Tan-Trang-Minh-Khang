#include <iostream>
using namespace std;

int LietKe (int Array[10], int index , int l)
{
	for (int i = index ; i < l ; i++ )
		cout<<Array[i];
	cout<<endl;
	return 0;
}
int Calculate (int Array[10])
{
	for (int i = 0 ; i < 8 ; i++)

}

int main(int argc, char const *argv[])
{
	int Array[10];
	for (int i = 0 ; i < 10 ; i++)
		cin>>Array[i];
	cout<<Calculate(Array);
	return 0;
}
