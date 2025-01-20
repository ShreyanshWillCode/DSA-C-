#include <iostream>
using namespace std;
int main()
{
    // int a, b = 1;
    // a = 10;
    // if (++a)
    //     cout << b;
    // else
    //     cout << ++b;

    /*Question-2*/
    // int a = 1;
    // int b = 2;
    // if (a-- > 0 && ++b > 2)
    // {
    //     cout << "Stage1-Inside If";
    // }
    // else
    // {
    //     cout << "Stage2 - Iside else";
    // }
    // cout << a << " " << b << " " << endl;

    /*Question-3*/
    // int number =3;
    // cout<<(25*(++number));
    /*Question-4*/
    // int a = 1;
    // int b = ++a;
    // int c = a++;
    // cout << b;
    // cout << c;
    /*Question- 5*/
    int a = 1;
    int b = 2;
    if (a-- > 0 || ++b > 2)
    {
        cout << "Stage1-Inside If";
    }
    else
    {
        cout << "Stage2 - Iside else";
    }
    cout << a << " " << b << " " << endl;
}