#include <iostream>
using namespace std;
int main()
{
    // int i = 8;
    // cout << (++i) << endl;
    // cout << (i++) << endl;
    // cout << (i--) << endl;
    // cout << (++i) << endl;

    // int n;
    // cout << "Enter the value of n: " << endl;
    // cin >> n;
    // cout << "Printing count from 1-n: " << endl;
    /*type1*/
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << i << endl;
    // }
    /*Type2*/
    // int i = 1;
    // for (;;)
    // {
    //     if (i <= n)
    //     {
    //         cout << i << endl;
    //     }
    //     else
    //     {
    //         break;
    //     }
    //     i++;
    // }
    /*question*/
    int n;
    cout << "enter the value of n" << endl;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << sum << endl;
}