#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int change=0;
    cin>>n;

    vector<vector<int>> a(n,vector<int>(n));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }

    vector<vector<int>> b(n,vector<int>(n));
    int val=1;

    for (int start = n - 1; start >= 0; start--) {
        int i = start, j = 0;
        while (i < n && j < n)
            b[i++][j++] = val++;
    }

    for (int start = 1; start < n; start++) {
        int i = 0, j = start;
        while (i < n && j < n)
            b[i++][j++] = val++;
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]!=b[i][j])
            {
                change++;
            }
        }
    }

    cout<<change;
    
    return 0;
}