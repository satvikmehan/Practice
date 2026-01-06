#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> pairSum(vector<int> nums,int target)
{
    vector<int> ans;
    int n=nums.size();

    int st=0;int end=n-1;
    while(st<end)
    {
        if(nums[st]+nums[end]>target)
        {
            end--;
        }
        else if(nums[st]+nums[end]<target)
        {
            st++;
        }
        else if(nums[st]+nums[end]==target)
        {
            ans.push_back(st);
            ans.push_back(end);
            return ans;
        }
    }
}

int main()
{
    vector<int>nums={2,7,11,15};
    int target=18;

    vector<int>ans=pairSum(nums,target);
    for(int val:ans)
    {
        cout<<val<<" ";
    }
    
    return 0;
}