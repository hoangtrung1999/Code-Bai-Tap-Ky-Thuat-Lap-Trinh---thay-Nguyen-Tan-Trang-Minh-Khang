	#include <iostream>
	using namespace std;

	void Xoa (int Array[100], int &n, int k)
	{
		for (int i = k ; i < n - 1 ; i++)
			Array[i] = Array[i+1];
		n--;
	}

	int Calculate (int Array[100], int &n)
	{
		int Max = Array[0];
		for (int i = 1 ; i < n ; i++)
			if ( Array[i] > Max)
			{
				Max =Array[i];
				break;
			}
		for (int i = 0 ; i < n;)
		{
			if (Array[i] == Max)
			{
				Xoa(Array,n,i);
				i = 0;
			}
			else
				i++;
		}

		cout<<"Mang sau khi xoa cac phan tu lon nhat:"<<endl;

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
