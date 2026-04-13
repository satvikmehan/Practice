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

    int element;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(count==0)
        {
            element=arr[i];
        }
        if(arr[i]==element)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    int freq=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==element)
        {
            freq++;
        }
    }

    if(freq>n/2)
    {
        cout<<element;;
    }
    else
    {
        cout<<"NO";
    }
    
    return 0;
}