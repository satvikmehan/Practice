#include<bits/stdc++.h>
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


    int init=arr[0];
    int count=1;
    int maxcount=INT_MIN;
    for(int i=1;i<n;i++)
    {
        if(arr[i]==init+1)
        {
            count++;
            init=arr[i];
            maxcount=max(count,maxcount);
        }
        else
        {
            init=arr[i];
            count=1;
        }
    }
    cout<<max(maxcount,count);
}