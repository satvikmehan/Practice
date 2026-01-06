#include<iostream>
#include<cmath>
//#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num,c;
    cin>>num;
    c=sqrt(num);
    for(int i=2;i<=c;i++)
    {
        if(num%i==0)
        {
            cout<<"No"<<i;
            return 0;
        }
    }
    cout<<"Yes";
    return 0;
}