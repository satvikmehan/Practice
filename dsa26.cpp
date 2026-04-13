#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int target;
    cin>>target;
    int st=0;
    int end=n-1;
    while(st<=end)
    {
        int sum=arr[st]+arr[end];
        if(sum>target)
        {
            end--;
        }
        else if(sum<target)
        {
            st++;
        }
        else
        {
            cout<<arr[st]<<" "<<arr[end];
            return 0;
        }

    }
    return 0;
}