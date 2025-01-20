#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int row = 1;
    int count = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            // cout << row;
            cout << count << " ";

            col = col + 1;
            count = count + 1;
            /* code */
        }

        cout << endl;
        row = row + 1;

        /* code */
    }

  
}