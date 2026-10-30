#include<iostream>
using namespace std;

int main()
{
    int arr[]={100,4,200,1,3,2};
    int n=sizeof(arr)/sizeof(int);

    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    int init=arr[0];
    int count=1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]=init+1)
        {
            count++;
            init++;
        }
        else
        {
            init=arr[i];
            count=1;
        }
    }
    cout<<count;
}