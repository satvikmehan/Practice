#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l,b,r,s;
    int num;
    cin>>num;

    switch(num)
    {
        case 1:
        cin>>l>>b;
        cout<<l*b;
        break;

        case 2:
        cin>>r;
        cout<<3.14*r*r;
        break;

        case 3:
        cin>>s;
        cout<<s*s;
        break;

        default:
        cout<<"Invalid Command";
        break;
    }
    return 0;
}