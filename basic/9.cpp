#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num,c=0;
    cin>>num;
    while(num>0)
    {
        num/=10;
        c++;
    }
    cout<<c;
    return 0;
}