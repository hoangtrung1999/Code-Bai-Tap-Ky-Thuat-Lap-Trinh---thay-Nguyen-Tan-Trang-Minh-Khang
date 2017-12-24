#include <iostream>
#include <string>
using namespace std;
struct LuanVan
{
	string ID;
	string Name;
	string Author;
	string Teacher;
	int Year;
};

void Input (LuanVan &luanvan)
{
	cout<<"Nhap ma luan van: ";
	getline(cin,luanvan.ID);
	cout<<"Nhap ten luan van: ";
	getline(cin,luanvan.Name);
	cout<<"Nhap ten sinh vien thuc hien: ";
	getline(cin, luanvan.Author);
	cout<<"Nhap ten giao vien huong dan: ";
	getline(cin,luanvan.Teacher);
	cout<<"Nhap nam thuc hien: ";
	cin>>luanvan.Year;
}

int FindMax (LuanVan ListLuanVan[100], int n)
{
	int count;
	int Year;
	int MaxCount = 0;
	int MaxYear = 0;
	for (int i = 0 ; i < n; i++)
		{
			Year = ListLuanVan[i].Year;
			count = 0;
			for (int j = i ; j < n ; j++)
				if ( ListLuanVan[j].Year == Year)
					count++;
			if (count > MaxCount)
			{
				MaxCount = count;
				MaxYear = Year;
			}
		}
	return MaxYear;
}

void FindTheNearest(LuanVan ListLuanVan[100], int n,int x)
{
	int temp;
	for (int i = 0 ; i < n - 1 ;  i++)
		for (int j = i + 1 ; j < n ; j++)
			if (abs(ListLuanVan[i].Year-x) > abs(ListLuanVan[j].Year-x))
			{
				temp = ListLuanVan[i].Year;
				ListLuanVan[i].Year = ListLuanVan[j].Year;
				ListLuanVan[j].Year = temp;
			}
	int k = 0 ;
	while (ListLuanVan[k].Year == ListLuanVan[0].Year)
	{
		cout<<ListLuanVan[k].Name<<" ";
		k++;
	}
}

void Output(LuanVan luanvan)
{
	cout<<"Ma luan van: "<<luanvan.ID<<endl;
	cout<<"Ten luan van: "<<luanvan.Name<<endl;
	cout<<"Ten sinh vien thuc hien: "<<luanvan.Author<<endl;
	cout<<"Ten giao vien huong dan: "<<luanvan.Teacher<<endl;
	cout<<"Nam thuc hien: "<<luanvan.Year<<endl;
}

int main()
{
	LuanVan ListLuanVan[100];
	int n;
	int choice;
	char Cchoice;
	do
	{
		cout<<"Nhap vao so luong luan van:"<<endl;
		cin>>n;
		fflush(stdin);
		for (int i = 0 ; i < n ; i++)
		{
			cout<<"Nhap vao thong tin cua luan van thu "<<i +1 <<endl;
			Input(ListLuanVan[i]);
			fflush(stdin);
		}
		cout<<"Nhap lua chon cua ban:"<<endl;
		cout<<"1/ Xuat thong tin."<<endl;
		cout<<"2/ Tim nam co nhieu luan van nhat"<<endl;
		cout<<"3/ Liet ke cac luan van thuc hien gan nhat"<<endl;
		cout<<"4/ Thoat chuong trinh"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
				for (int i = 0 ; i < n ; i++)
				{
					cout<<"Thong tin cua luan van thu "<<i +1 <<endl;
					Output(ListLuanVan[i]);
				}
				break;
			case 2:
				cout<<FindMax(ListLuanVan,n)<<endl;
				break;
			case 3:
				cout<<"Nhap vao nam hien tai: ";
				int x;
				cin>>x;
				cout<<"Nhung luan van duoc lam gan day nhat la: ";
				FindTheNearest(ListLuanVan,n,x);
				break;
			case 4: 
				return 0;
		}
		cout<<"Ban co muon tiep tuc? Nhan 'Y' de tiep tuc va 'N' de thoat."<<endl;
		cin>>Cchoice;
	}while (choice != 4 && Cchoice != 'N');
	return 0;
}