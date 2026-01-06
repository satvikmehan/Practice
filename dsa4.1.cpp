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
    for(int st=0;st<size;st++)
    {
        int cur=0;
        for(int end=st+1;end<size;end++)
        {
            cur+=array[end];
            if(cur>sum)
            {
                sum=cur;
            }
        }
    }
    cout<<sum;
    return 0;
}