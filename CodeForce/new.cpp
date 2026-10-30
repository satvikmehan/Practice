#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {2, 5, -7, 4, 10, -12};
    int tar = 11;

    int n=sizeof(arr)/sizeof(int);

    for(int i=0;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            for(int k=2;k<n;k++)
            {
                if(i!=j && j!=k && i!=k)
                {
                    if(arr[i]+arr[j]+arr[k]==tar)
                    {
                        cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k];
                    }
                }
            }
        }
    }

    return 0;
}