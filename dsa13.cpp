#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int peakIndexInMountainArray(vector<int>& arr) 
    {
        int end=arr.size()-2;
        int st=1;
        while(st<=end)
        {
            int mid=st+(end-st)/2;

            if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1])
            {
                return mid;
            }

            if(arr[mid]<arr[mid+1])
            {
                st=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        return 0;
    }

int main()
{
    vector<int> arr = {0,2,1,0};

    cout<<peakIndexInMountainArray(arr);

    return 0;
}