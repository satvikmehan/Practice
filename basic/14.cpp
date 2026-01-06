#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin>>num;
    int temp=num;
    int arm=0,rem,d=0,pow;
    while(temp>0)
    {
        temp/=10;
        d++;
    }
    temp=num;
    while(temp>0)
    {
        rem=temp%10;
        temp/=10;
        pow=1;
        for(int i=0;i<d;i++)
        {
            pow*=rem;
        }
        arm+=pow;
    }
    if(arm==num)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    return 0;
}