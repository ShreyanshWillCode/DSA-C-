#include <iostream>
using namespace std;
int main()
{ /*Question 1*/
    // for (int i = 0; i <= 5; i--)
    // {
    //     cout << i << " ";
    //     i++;
    // }

    /*Question 2*/
    // for (int i = 0; i <= 15; i += 2)
    // {
    //     cout << i << " ";
    //     if (i & 1)
    //     {

    //         continue;
    //     } /* code */
    //     i++;
    // }

    /*Question 4*/
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = i; j <= 5; j++)
    //     {
    //         /* code */

    //         cout << i << " " << j << endl;
    //     }
    // }

    /*Question 5*/
    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j <= 5; j++)
        {
            if (i + j == 10)
            {
                break;
                 /* code */
            }

            /* code */

            cout << i << " " << j << endl;
        }
    }
}