#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10];
    int temp;
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<10;i+=2)
    {
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}