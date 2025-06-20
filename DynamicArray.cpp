#include <iostream>
using namespace std;
int main()
{
    int row;
    cout << "Enter no. of Rows-> ";
    cin >> row;
    int col;
    cout << endl
         << "Enter no. of Columns-> ";
    cin >> col;
    int **arr = new int *[row];
    cout << endl
         << "Enter elements-> ";
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }
    // taking input
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl
         << "2D-Matrix |\n"
            "          v"
         << endl;
    for (int i = 0; i < row; i++)
    {
        cout << "    ";
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < row; i++)
    {
        delete [] arr[i];
    }
    delete [] arr;

    return 0;
}