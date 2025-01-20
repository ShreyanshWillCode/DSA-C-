#include <iostream>
using namespace std;

void Update(int arr[], int n)
{

    cout << "Inside the Function" << endl;
    arr[0] = 120;

    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
        cout << endl;
        cout << "Going back to main function" << endl;
    }
}

int main()
{
    int arr[3] = {1, 2, 3};
    Update(arr, 3);
    cout << endl
         << "Printing the main function" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";

        /* code */
    }

    return 0;
}