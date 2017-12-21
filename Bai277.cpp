	#include <iostream>
	#include <cmath>
	using namespace std;

	void Xoa (int Array[100], int &n, int k)
	{
		for (int i = k ; i < n - 1 ; i++)
			Array[i] = Array[i+1];
		n--;
	}

	bool Check (int n)
	{
		if ( n < 2)
			return false;
		for (int i = 2 ; i <= sqrt(n) ; i++)
			if ( n % i == 0)
				return false;
		return true;
	}

	int Calculate (int Array[100], int &n)
	{
		for (int i = 0 ; i < n;)
		{
			if (Check(Array[i]))
			{
				Xoa(Array,n,i);
				i = 0;
			}
			else
				i++;

		}
			
		cout<<"Mang sau khi xoa cac phan tu nguyen to:"<<endl;

		for (int i = 0 ; i < n ; i++)
			cout<<Array[i]<<" ";

	}

	int main(int argc, char const *argv[])
	{
		int Array[100];
		int n;
		cout<<"Nhap kich thuoc mang: "<<endl;
		cin>>n;
		for (int i = 0 ; i < n ; i++)
			cin>>Array[i];
		Calculate(Array,n);
		return 0;
	}
