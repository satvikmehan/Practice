#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int arr[10];
    int s;
    cin>>s;
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
        if(arr[i]==s)
        {
            cout<<"Yes at "<<i+1;
            return 0;
        }
    }
    cout<<"No";
    return 0;
}