#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isValid(vector<int>pages,int students,int check)
{
    int st=1,page=0;
    for(int i=0;i<pages.size();i++)
    {
        if(pages[i]>check)
        {
            return false;
        }
        if(page+pages[i]<=check)
        {
            page+=pages[i];
        }
        else
        {
            st++;
            page=pages[i]; 
        }
    }
    if(st>students)
    {
        return false;
    }
    else
    {
        return true;
    }
    
}

int BookAllocation(vector<int>pages,int students)
{
    int sum;
    for(int i:pages)
    {
        sum+=i;
    }
    int ans=-1;
    int n=pages.size();
    if(n<students)
    {
        return ans;
    }
    int st=0;
    int end=sum;
    while(st<=end)
    {
        int mid=st+(end-st)/2;
        if(isValid(pages,students,mid))
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
    vector<int>pages={15,17,20};
    int students=2;

    cout<<BookAllocation(pages,students);
    
    return 0;
}