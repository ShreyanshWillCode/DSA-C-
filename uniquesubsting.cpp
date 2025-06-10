#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

// Prime check function
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;
    for (int i = 3; i <= sqrt(n); i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int sumOfLargestPrimeSubstrings(string s)
{
    unordered_set<int> uniquePrimes; // ✅ Correct type here
    int n = s.size();

    for (int i = 0; i < n; ++i)
    {
        string numStr = "";
        for (int j = i; j < n; ++j)
        {
            numStr += s[j];

            if (numStr.size() > 10)
                break; // Avoid overflow

            int num = stoi(numStr);
            if (isPrime(num))
            {
                uniquePrimes.insert(num); // ✅ Now works fine
            }
        }
    }

    vector<int> primes(uniquePrimes.begin(), uniquePrimes.end());
    sort(primes.rbegin(), primes.rend());

    int sum = 0;
    for (int i = 0; i < min(3, (int)primes.size()); ++i)
    {
        sum += primes[i];
    }

    return sum;
}

int main()
{
    string s = "3";
    string H = "abcf";
    cout << "Sum of 3 largest unique prime substrings: " << sumOfLargestPrimeSubstrings(s) << endl;
    for (int i = 0; i < 4; i++)
    {
        /* code */

        for (char c = 'a'; c <= 'z'; c++)
        { if(s[i]==c[s[i]+1]);
            cout << c << endl;
        }
    }
    return 0;
}
