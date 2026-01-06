#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10];
    int rev[10];
    int temp;
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<10;i++)
    {
        if(arr[i]%2==0)
        {
            arr[i]=arr[i]/2;
        }
        else
        {
            arr[i]=arr[i]*3;
        }
    }
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}