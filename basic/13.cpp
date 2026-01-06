#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num,rev=0,r;
    cin>>num;
    int temp=num;
    while(num>0)
    {
        r=num%10;
        rev=(rev*10)+r;
        num/=10;
    }
    if(temp==rev)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    return 0;
}