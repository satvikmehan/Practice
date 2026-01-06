#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int arr[10];
    int s;
    int count=0;
    cin>>s;
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
        if(arr[i]==s)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}