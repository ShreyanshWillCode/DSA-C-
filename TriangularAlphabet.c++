#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int row = 1;
    // char ch = 'A';
    /*for pattern
         A
         B C
         D E F*/

    while (row <= n)
    {
        //  char ch = 'A'+row-1;
        /*for pattern
        A
        B B
        C C C*/
        int col = 1;
        
        while (col <= row)
        {
            // char ch = 'A' + row + col - 2;
            /*for pattern
            A
            B C
            C D E
            D E F G
            */
           char ch = 'A' + n - row+col-1;
            cout << ch << " ";

            // ch++;
            col = col + 1;
            /* code */
        }
        cout << endl;
        row = row + 1;

        /* code */
    }
}