#include <iostream>
#include <vector>
#include <algorithm>
#include <Windows.h>
using namespace std;
bool willnotFight(vector<int> &stalls, int mid, int Cows)
{
    for (int i = 1; i < stalls.size(); i++)
    {
        int CountCows = 1;
        int lastPos = stalls[0];
        if (stalls[i] - lastPos >= mid)
        {
            CountCows++;
            if (CountCows == Cows)
            {
                return true;
            }
            lastPos = stalls[i];
        }
    }

    return false;
}

int aggressive(vector<int> &stalls, int Cows)
{

    sort(stalls.begin(), stalls.end());
    int start = 0;
    int maxi = -1;
    for (int i = 0; i < stalls.size(); i++)
    {
        maxi = max(maxi, stalls[i]);
    }
    int end = maxi;
    int ans = -1;

    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (willnotFight(stalls, mid,Cows))
        {
            start=mid+1;
            ans=mid;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

int main()
{
    vector<int>cows={2,3,1,9,7,8};
    int ans=aggressive(cows,2);
    cout<<ans<<endl;
    return 0;
}