#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=0;
    int b=1;
    int c=1;
    cout<<a<<" "<<b<<" "<<c<<" ";
    for(int i=0;i<10;i++)
    {
        int s=a+b+c;
        cout<<s<<" ";
        a=b;
        b=c;
        c=s;
    }
    return 0;
}