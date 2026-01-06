#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    for(int i=1;i<=64;i*=2)
    {
        cout<<i;
        if(i<64)
        {
            cout<<",";
        }

    }
    return 0;
}