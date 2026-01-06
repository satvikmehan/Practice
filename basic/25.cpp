#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int sum=50;
    for(int i=5;i>=0;i--)
    {
        cout<<sum;
        sum-=i;
        if(i>0)
        {
            cout<<",";
        }
    }
    return 0;
}