#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int reverse(int arr[],int size)
{
    int temp;
    for(int i=0;i<size/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[size-1-i];
        arr[size-1-i]=temp;
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