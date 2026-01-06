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
        if(arr[i]%10==0)
        {
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            i++;
        }
    }
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}