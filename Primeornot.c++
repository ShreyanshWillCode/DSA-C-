#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 2;
    while (i < n)
    {
        if (n % i == 0)
        {
            cout << "Not Prime for" << " " << i
                 << endl; /* code */
        }
        else
        {
            cout << "Prime for " << i << endl;
        }
        i = i + 2;
        /* code */
    }
}