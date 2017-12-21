#include <iostream>
using namespace std;

int Calculate(int d , int m , int year)
{
	int S = d;

	switch (m)
	{
		case 1:
			S+= 31;
		case 2:
			if ( year % 400 == 0 || year % 4 == 0 && year % 100 != 0 )
				S+= 29;
			else 
				S+= 28;
		case 3:
			S+= 31;
		case 4:
			S+= 30;
		case 5:
			S+= 31;
		case 6:
			S+=  30;
		case 7:
			S+= 31;
		case 8:
			S+= 31;
		case 9:
			S+= 30;
		case 10:
			S+= 31;
		case 11:
			S+= 30;
		case 12:
			S+= 31;
	}
	return S;
}

int main()
{
	int d , m , y ;
	cout<<"Nhap dd/mm/yyyy: ";
	cin>>d>>m>>y;
	cout<<Calculate(d,m,y);
	return 0;
}