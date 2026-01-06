#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int sum=50;
    for(int i=10;i>=3;i--)
    {
        cout<<sum;
        sum-=i;
        if(i>3)
        {
            cout<<",";
        }
    }
    return 0;
}