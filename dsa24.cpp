#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<int>stalls,int cow,int n,int check)
{
    int cows=1,stall=stalls[0];
    for(int i=1;i<n;i++)
    {
        if(stalls[i]-stall>=check)
        {
            cows++;
            stall=stalls[i];
        }
        if(cows==cow)
        {
            return true;
        }
    }
    return false;
}


int AggressiveCow(vector<int>stalls,int cow)
{
    int n=stalls.size();
    vector<int>temp;
    for(int i:stalls)
    {
        temp.push_back(i);
    }
    sort(temp.begin(),temp.end());
    int st=temp[1]-temp[0],end=temp[n-1]-temp[0];
    int ans=-1;
    while(st<=end)
    {
        int mid=st+(end-st)/2;
        if(isPossible(temp,cow,n,mid))
        {
            ans=mid;
            st=mid+1;
        }
        else
        {
            end=mid-1;
        }

    }
    return ans;

}

int main()
{
    vector<int> stalls={1,2,8,4,9};
    int cow=3;

    cout<<AggressiveCow(stalls,cow);
    
    return 0;
}