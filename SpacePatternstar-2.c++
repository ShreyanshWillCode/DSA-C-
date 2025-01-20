#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        /* code */

        // for space
        int space=row-1 ;
        while (space)
        {
            cout << " ";
            space = space-1;
            /* code */
        }
        /*for pattern:
         *****
          ****
           ***
            **
             *
         */
        // for star
        int col = 1;
        while (col <= n-row+1)
        {
            cout << "*";
            col = col + 1;

            /* code */
        }
        cout << endl;
        row = row + 1;
    }
}