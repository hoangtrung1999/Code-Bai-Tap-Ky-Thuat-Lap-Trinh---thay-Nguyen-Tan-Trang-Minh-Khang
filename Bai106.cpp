#include <iostream>
using namespace std;
 
int FistNumber(int a)
{
    switch(a)
    {
        case 1:
    cout<<"mot ";
    break;
    case 2:
    cout<<"hai ";
    break;
    case 3:
    cout<<"ba ";
    break;
    case 4:
    cout<<"bon ";
    break;
    case 5:
    cout<<"nam ";
    break;
    case 6:
    cout<<"sau ";
    break;
    case 7:
    cout<<"bay ";
    break;
    case 8:
    cout<<"tam ";
    break;
    case 9:
    cout<<"chin ";
    break;
    }
    
}
 
int NextNumber(int b , int c)
{
    if (b == 0 && c == 0)
    {
        cout<<"tram";
    }
    if (b == 0 && c != 0)
    {
        cout<<"tram le ";
        switch(c)
        {
        case 1:
                    cout<<"mot";
                    break;
                    case 2:
                    cout<<"hai";
                    break;
                    case 3:
                    cout<<"ba";
                    break;
                    case 4:
                    cout<<"bon";
                    break;
                    case 5:
                    cout<<"nam";
                    break;
                    case 6:
                    cout<<"sau";
                    break;
                    case 7:
                    cout<<"bay";
                    break;
                    case 8:
                    cout<<"tam";
                    break;
                    case 9:
                    cout<<"chin";
                    break;
        }    
    }
    if ( b != 0 &&  c == 0)
    {
        switch(b)
        {
        case 1:
        cout<<"tram muoi";
        break;
        case 2:
        cout<<"tram hai muoi";
        break;
        case 3:
        cout<<"tram ba muoi";
        break;
        case 4:
        cout<<"tram bon muoi";
        break;
        case 5:
        cout<<"tram nam muoi";
        break;
        case 6:
        cout<<"tram sau muoi";
        break;
        case 7:
        cout<<"tram bay muoi";
        break;
        case 8:
        cout<<"tram tam muoi";
        break;
        case 9:
        cout<<"tram chin muoi";
        break;
        }
    }
    if ( b != 0 &&  c != 0)
    {
        switch(b)
        {
        case 1:
        cout<<"tram muoi ";
        break;
        case 2:
        cout<<"tram hai muoi ";
        break;
        case 3:
        cout<<"tram ba muoi ";
        break;
        case 4:
        cout<<"tram bon muoi ";
        break;
        case 5:
        cout<<"tram nam muoi ";
        break;
        case 6:
        cout<<"tram sau muoi ";
        break;
        case 7:
        cout<<"tram bay muoi ";
        break;
        case 8:
        cout<<"tram tam muoi ";
        break;
        case 9:
        cout<<"tram chin muoi ";
        break;
        }
        switch(c)
        {
        case 1:
        cout<<"mot";
        break;
        case 2:
        cout<<"hai";
        break;
        case 3:
        cout<<"ba";
        break;
        case 4:
        cout<<"bon";
        break;
        case 5:
        cout<<"lam";
        break;
        case 6:
        cout<<"sau";
        break;
        case 7:
        cout<<"bay";
        break;
        case 8:
        cout<<"tam";
        break;
        case 9:
        cout<<"chin";
        break;
        }
    }
 
}
int main()
{
    int n;
    cin>>n;
    if ( n / 100  < 10 && n / 100 > 0 )
    {
        FistNumber(n/100);
        n = n % 100;
        NextNumber(n/10 , n%10);
    }
    else 
        cout<<"NULL";
    return 0;
}