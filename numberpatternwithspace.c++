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
        int space = n - row;
        while (space)
        {
            cout << " ";
            space = space - 1;

            /* code */
        }
        int col = 1;
        while (col <= row)
        {
            cout << row<<"";
            col = col + 1;
            /* code */
        }
        cout << endl;
        row = row + 1;
    }
}