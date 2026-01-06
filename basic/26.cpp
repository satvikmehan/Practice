#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=0;
    int b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=0;i<10;i++)
    {
        int s=a+b;
        cout<<s<<" ";
        a=b;
        b=s;
    }
    return 0;
}