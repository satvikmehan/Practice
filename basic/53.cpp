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
        rev[i]=arr[9-i];
    }
    for(int i=0;i<10;i++)
    {
        cout<<rev[i]<<endl;
    }
    
    return 0;
}