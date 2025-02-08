
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

string reverseWords(string s)
{

    string reversestr;
    vector<string> f;
    std::stringstream ss(s);
    string word;
   

    while (ss >> word)
    {
        f.push_back(word);
    }
    for (int i = f.size() - 1; i >= 0; i--)
    {
        reversestr += f[i];

        /* code */
        if (i != 0)
        {
            /* code */
            reversestr += " ";
        }
    }
    cout << reversestr;
}
int main()
{
    string s = "Hello world";
    reverseWords(s);
    return 0;
}