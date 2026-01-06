#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    int temp;
    cin>>num;
    int pos;

    int arr[num];
    for(int i=0;i<num;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<num;i++)
    {
        int small=arr[i];
        for(int j=i+1;j<num;j++)
        {
            if(arr[j]<small)
            {
                small=arr[j];
                pos=j;
            }
        }
        arr[pos]=arr[i];
        arr[i]=small;


    }

    for(int i=0;i<num;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}