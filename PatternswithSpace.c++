#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int row = 1;

    while (row <= n)
    {
        // space print
        // int space = n - row;
        // while (space)
        // {
        //     cout << " ";
        //     space = space - 1;
        //     /* code */
        // }
        /*for pattern
         *
         **
         ***
         */

        // print star
        int col = 1;
    /*
     *** 
     **
     *   
    */
        while (col <= n-row+1)
        { 
            cout << "*" ;
            col = col + 1;
            
            /* code */
        }
        cout << endl;
        row = row + 1;
        /* code */
    }
}