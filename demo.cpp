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
    for(int j=0;j<n;j++)
    {
        int set = arr[j];
        for(int k=0;k<n;k++)
        {
            if(j!=k)
            {
                if(arr[j]==arr[k])
                {
                    cout<<arr[j];
                    return 0;
                }
            }
        }
    }
    cout<<"Not Valid";
    return 0;
}