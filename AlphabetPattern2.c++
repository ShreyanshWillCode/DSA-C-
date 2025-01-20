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
        {  char stor = 'A'+row+col-2;
            
            cout << stor << " ";

            col = col + 1;
            /* code */
        }
        cout << endl;
        row = row + 1;
        /* code */
    }
}