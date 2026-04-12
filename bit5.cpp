#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row,col;
    cin>>row;
    cin>>col;
    int arr[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>arr[i][j];
        }
    }
    int ans[row];
    for(int i=0;i<row;i++)
    {
        int max=INT_MIN;
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]>max)
            {
                max=arr[i][j];
            }
        }
        ans[i]=max;
    }
    for(int i=0;i<row;i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}
