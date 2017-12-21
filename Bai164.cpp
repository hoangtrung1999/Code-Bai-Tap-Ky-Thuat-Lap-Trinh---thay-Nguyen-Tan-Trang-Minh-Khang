#include <iostream>
using namespace std;

int Calculate (int Array[100], int n)
{

}

int main(int argc, char const *argv[])
{
	int Array[100];
	int n;
	cout<<"Nhap kich thuoc mang: ";
	cin>>n;
	for (int i = 0 ; i < n ; i++)
		cin>>Array[i];
	Calculate(Array,n);
	return 0;
}
