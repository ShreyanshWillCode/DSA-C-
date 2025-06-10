#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

bool check_equal(int a[26], int b[26])
{
    for (int i = 0; i < 26; i++)
    {
        if (a[i] != b[i])
        {
            return 0; /* code */
        }

        /* code */
    }
    return 1;
}
bool check_Inclusion(string s1, string s2)
{
    int count1[26] = {0};
    for (int i = 0; i < s1.length(); i++)
    {
        /* code */
    }

    return 1;
}
int main()
{
    string s1, s2;
    int a[26] = {2,3};
    int b[26] = {2,3};
    cout << check_equal(a, b) << endl;
    return 0;
}