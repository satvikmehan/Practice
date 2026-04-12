#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,target,ans;
    cin>>n;
    cin>>target;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==target)
        {
            cout<<i;
            ans=i;
        }
    }
    return ans;
}