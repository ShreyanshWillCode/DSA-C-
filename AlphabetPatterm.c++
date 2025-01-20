#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            // char ch = 'A' + row - 1;
            char ch = 'A' + col - 1;
            /*
            for pattern
            ABC
            ABC
            ABC */
            cout << ch;
            col = col + 1;
            /* code */
        }
        cout << endl;
        row = row + 1;
    }
}