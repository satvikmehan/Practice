#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int max,min;
    int hcf,lcm;

    if(a>b)
    {
        max=a;
        min=b;
    }
    else
    {
        max=b;
        min=a;
    }
    for(int i=1;i<=min;i++)
    {
        if(max%i==0 && min%i==0)
        {
            hcf=i;
        }
    }
    lcm=a*b/hcf;
    cout<<hcf<<" "<<lcm;
    return 0;
}