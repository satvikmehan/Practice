#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num,e=0,o=0;
    cin>>num;
    while(num>0)
    {
        if((num%10)%2==0)
        {
            e++;
        }
        else
        {
            o++;
        }
        num/=10;
    }
    cout<<e<<'\t'<<o;
    return 0;
}