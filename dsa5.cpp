#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> pairSum(vector<int> nums,int target)
{
    vector<int> ans;
    int n=nums.size();

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(nums[i]+nums[j]==target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    } 
}

int main()
{
    vector<int>nums={2,7,11,16};
    int target=9;

    vector<int>ans=pairSum(nums,target);
    for(int val:ans)
    {
        cout<<val<<" ";
    }
    
    return 0;
}