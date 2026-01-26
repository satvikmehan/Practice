#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int isPossible(vector<int>boards,int m,int n,int check)
{
    int painter=1;int board=0;
    for(int i=0;i<n;i++)
    {
        if(boards[i]>check)
        {
            return false;
        }
        if(board+boards[i]<=check)
        {
            board+=boards[i];
        }
        else
        {
            painter++;
            board=boards[i];
        }
    }
    if(painter>m)
    {
        return false;
    }
    else
    {
        return true;
    }

}

int PainterPartition(vector<int>boards,int m)
{
    int n=boards.size();
    int sum=0;
    int Mtime=-1;
    for(int i:boards)
    {
        sum+=i;
        Mtime=max(Mtime,i);
    }
    int st=Mtime,end=sum;
    int ans=-1;
    while(st<=end)
    {
        int mid=st+(end-st)/2;
        if(isPossible(boards,m,n,mid))
        {
            ans=mid;
            end=mid-1;
        }
        else
        {
            st=mid+1;
        }
    }
    return ans;
}

int main()
{
    vector<int>boards={40,30,10,20};
    int m=2;

    cout<<PainterPartition(boards,m);

    return 0;
}