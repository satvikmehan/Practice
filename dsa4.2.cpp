#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin>>size;
    int array[size];
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }

    int sum=INT_MIN;
    int cur=0;


    for(int i=0;i<size;i++)
    {
        cur+=array[i];
        if(cur>sum)
        {
            sum=cur;
        }
        if(cur<0)
        {
            cur=0;
        }
    }
    cout<<sum;
    return 0;
}