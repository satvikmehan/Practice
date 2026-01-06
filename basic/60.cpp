#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    int temp;
    cin>>num;

    int arr[num];
    for(int i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<num-1;i++)
    {
        for(int j=0;j<num-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }
    }
    for(int i=0;i<num;i++)
    {
        cout<<arr[i]<<endl;
    }
    
    
    return 0;
}