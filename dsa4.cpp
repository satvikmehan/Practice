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
        for(int end=st+1;end<size;end++)
        {
            int add=0;
            for(int i=st;i<end;i++)
            {
                add+=i;
                if(add>sum)
                {
                    sum=add;
                }
            }
        }
    }
    cout<<sum;
    return 0;
}