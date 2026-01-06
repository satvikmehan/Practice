#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={1,73,44,12,4,65};
    sort(arr,arr+6);
    sort(arr,arr+6,greater<int>());
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}