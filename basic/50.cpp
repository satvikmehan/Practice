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
    int flag;
    cin>>flag;
    int start=0,end=n,mid;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(arr[mid]==flag)
        {
            cout<<"Found at "<<mid+1;
            return 0;
        }
        else if(arr[mid]>flag)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }

    return 0;
}