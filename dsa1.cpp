#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{ 
    int n=8;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            cout<<" ";
        }

        cout<<"*";

        for(int j=0;j<(2*i)-1;j++)
        {
            cout<<" ";
        }

        if(i>0)
        cout<<"*";
        
        cout<<endl;
    }

    for(int i=n-1;i>0;i--)
    {
        for(int j=n;j>=i;j--)
        {
            cout<<" ";
        }

        cout<<"*";

        for(int j=1;j<2*(i-1);j++)
        {
            cout<<" ";
        }

        if(i>1)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}