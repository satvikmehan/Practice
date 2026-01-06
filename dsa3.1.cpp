#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}

void reverse(int arr[],int size)
{
    int start=0;
    int end=size-1;

    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int array[]={10,15,6,18,2,1,10,25};
    int size=sizeof(array)/sizeof(int);
    
    reverse(array,size);
    
    return 0;
}