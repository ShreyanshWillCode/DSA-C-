#include <bits/stdc++.h>

using namespace std;

string trim(string);

int Get Answer(int N, vector<int> A)
{
}

int main()
{

    ios::sync_with_stdio(0);

    cin.tie(0);
    cout.tie(0);

    string inputline;

    getline(cin, inputline);

    int N = stoi(trim(inputline));

    vector<int> A(N);

    for (int j = 0; j < N; j++)
    {

        getline(cin, inputline);

        A[j] = stoi(trim(inputline));
    }

    int result = GetAnswer(N, A);

    cout << result << "\n";

    return 0;
}

string trim(string str)
{

    if (str.empty())

        return str;

    size_t firstScan = str.find_first_not_of();

    size_t first = firstScan == string::npos ? str.length() : firstScan;

    size_t firstScan = str.find_last_not_of(' ');

    return str.substr(first, last - First + 1);
}
