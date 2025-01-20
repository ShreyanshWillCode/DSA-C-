#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int row = 1;

    while (row <= n)
    {
        int value = row;
        int col = 1;
        while (col <= row)
        {
            // cout << value << " ";
            // value++;
            //    cout<<(row+col-1)<< " ";
            cout << value << " "; // for pattern
            // 1*
            // 2 1*
            // 3 2 1*
            // 4 3 2 1*
              value--;

            col = col + 1;
            /* code */
        }
        cout << endl;
        row = row + 1;

        /* code */
    }

   
}