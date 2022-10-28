#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int x,y;
    cout<<"\n Enter a number divisible by 3 and less than 50:";
    cin>>x;
    y=x/3;
    for (int i=1 ; i<=1 ; i++ )
    {
        for (int j=1; j<=x ; j++)
        {
            cout<< "*";
        }
        cout<<endl;
    }
    for (int i=2 ; i<=2 ; i++ )
    {
        for (int j = 1; j <= y; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i=3; i<=3 ; i++ )
    {
        for (int j = 1; j <= y; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i=4 ; i<=4 ; i++ )
    {
        for (int j = 1; j <= x ; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i=5 ; i<=5 ; i++ )
    {
        for (int j = 1; j <= y; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i=6 ; i<=6 ; i++ )
    {
        for (int j = 1; j <= y; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i=7 ; i<=7 ; i++ )
    {
        for (int j = 1; j <= y; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout<<"\n\n This is the first letter of my name.";
    getch();
    return 0;
}
