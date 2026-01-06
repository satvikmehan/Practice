#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num,fact=0;
    cin>>num;
    for(int i=1;i<num;i++)
    {
        if(num%i==0)
        {
            fact+=i;
        }
    }
    if(fact==num)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    return 0;
}