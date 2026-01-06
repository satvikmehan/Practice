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
    for(int i=0;i<5;i++)
    {
        temp=arr[i];
        arr[i]=arr[i+5];
        arr[i+5]=temp;
    }
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}