#include <stdio.h>
#include <iostream>
using namespace std;
bool isPresent(int array[][4], int target, int row, int col)
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            if (array[row][col] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}
// rowise sum
void printSum(int array[][4], int row, int col)
{
    cout << "Printing Sum -->" << endl;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;

        for (int col = 0; col < 4; col++)
        {
            sum += array[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
}
// column wise sum
void printSumcol(int array[][4], int row, int col)
{
    cout << "Printing Sum -->" << endl;
    for (int col = 0; col < 4; col++)
    {
        int sum = 0;

        for (int row = 0; row < 3; row++)
        {
            sum += array[col][row];
        }
        cout << sum << " " << endl;
    }
}
// largest row sum
int largestRowSUm(int array[][4], int row, int col)
{
    int maxi = INT_MIN;
    int rowIndex = -1;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;

        for (int col = 0; col < 4; col++)
        {
            sum += array[row][col];
        }
        if (sum > maxi)
        {
            maxi = sum;
            rowIndex = row;
        }
    }
    cout << "the maximux sum is-->  " << maxi << endl;
    return rowIndex;
}

int main()
{
    // rowise-> input
    int arr[3][4];
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }

        /* code */
    }
    cout<<"Printing row wise"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
        /* code */
    }
    cout<<"Printing column wise"<<endl;
    for (int j = 0; j < 4; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
        /* code */
    }
    cout << "Enter element to search: ";
    int target;
    cin >> target;
    if (isPresent(arr, target, 3, 4) == true)
    {
        cout << "Element found " << endl;
        ;
    }
    else
    {
        cout << "not found" << endl;
        ;
    }
    printSum(arr, 3, 4);
    printSumcol(arr, 3, 4);
    int ans=largestRowSUm(arr, 3, 4);
    cout<<"Max row is at: "<<ans<<endl;
    return 0;
}