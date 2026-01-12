#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int binary_srch(vector<int> arr,int target)
{
    int n=arr.size();
    sort(arr.begin(),arr.end());
    int start=0;
    int end=n-1;
    int mid;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(target==arr[mid])
        {
            return 1;
        }
        target<arr[mid] ? end=mid-1 : start=mid+1;
    }
    return 0;
}

int main()
{
    int size;
    cin>>size;
    vector<int> arr(size);
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int target;
    cin>>target;
    
    if(binary_srch(arr,target)==1)
    {
        cout<<"Found";
    }
    else
    cout<<"Not Found";

    return 0;
}