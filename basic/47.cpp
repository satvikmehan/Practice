#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10];
    int even=0;
    int odd=0;
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    cout<<even<<" "<<odd;
    return 0;
}