#include <iostream>
using namespace std;

int Calculate (int Array[10])
{
	int Sum;
	bool Check[10] = {false};
	bool Checked = false;
	for (int i = 0 ; i < 10 ; i++)
	{
		Sum = 0;
		
		for (int k = i ; k < 10 ; k++)
		{
			if (Check[k] == false && (Array[i] == Array[k]))
			{
				Sum++;
				Check[k] = true;
				Checked = true;
			}
		}
		if (Checked == true && Sum > 1)
		{
			cout<<"Gia tri "<<Array[i]<<" xuat hien "<<Sum<<" lan."<<endl;
			Checked = false;
		}
		
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
