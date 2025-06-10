#include <iostream>
using namespace std;

char maxiOccurence(string S)
{

    int arr[26] = {0};
    for (int i = 0; i < S.length(); i++)
    {
        char ch = S[i];
        int occurence = 0;

        if (ch >= 'a' && ch <= 'z')
        {
            occurence = ch - 'a';
            
        }
        else
        {
            occurence = ch - 'A';
        }
        arr[occurence]++;
    }
    int maxi = -1, ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
            
        }

       
    }
    char finalAns = 'a' + ans;
    return finalAns;
}
int main()
{
    string S;
    cin >> S;
    cout << maxiOccurence(S) << endl;
    return 0;
}