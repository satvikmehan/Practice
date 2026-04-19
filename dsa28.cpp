#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cout<<0<<1;
    int sum=1;
    int prev=1;
    for(int i=0;i<n-2;i++)
    {
        cout<<sum;
        int temp=sum;
        sum+=prev;
        prev=temp;
    }
    return 0;
}