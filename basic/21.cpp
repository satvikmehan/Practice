#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int sum=1;
    for(int i=0;i<11;i+=2)
    {
        sum+=i;
        cout<<sum;
        if(i<10)
        {
            cout<<",";
        }
    }
    return 0;
}