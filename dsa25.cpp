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

    int maxSum=INT_MIN;
    int curSum=0;
    for(int i=0;i<n;i++)
    {
        curSum+=arr[i];
        maxSum=max(maxSum,curSum);
        if(arr[i]<0)
        {
            curSum=0;
        }
    }

    cout<<maxSum;
    
    return 0;
}