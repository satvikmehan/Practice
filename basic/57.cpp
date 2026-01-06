#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10];
    int rev[10];
    int temp;
    int j=0;
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<10;i++)
    {
        if(arr[i]%2==0)
        {
            rev[j]=arr[i];
            j++;
        }
    }
    for(int i=9;i>=0;i--)
    {
        if(arr[i]%2!=0)
        {
            rev[j]=arr[i];
            j++;
        }
    }
    for(int i=0;i<10;i++)
    {
        cout<<rev[i]<<endl;
    }
    
    return 0;
}