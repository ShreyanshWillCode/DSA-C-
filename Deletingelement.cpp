#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main()
{
    int arr[6]={1,2,2,4,5,6};
    vector<int>vec{1,1,2};
    int n=6;
    int pos=2;
    for(int i=pos;i<n-1;i++){
    arr[i]=arr[i+1];

    }
    n--;
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    set<int>iset(vec.begin(),vec.end());
    cout<<endl;
    for(auto it:iset){
        cout<<it<<" ";
    }
    cout<<endl;
cout<<iset.size();
    
    return 0;
}