#include<iostream>
#include<bits/stdc++.h>
using namespace std;


vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> temp;
        for(int i : nums)
        {
            temp.push_back(i);
        }
        sort(temp.begin(),temp.end());
        int n=nums.size();
        int st=0;int end=n-1;
        int a;int b;
        vector<int> ans;
        while(st<end)
        {
            int sum=temp[st]+temp[end];
            if(sum==target)
            {
                a=temp[st];
                b=temp[end];
                break;
            }
            else if(sum>target)
            {
                end--;
            }
            else
            {
                st++;
            }
        }
        if(a==b)
        {
            for(int i=0;i<n;i++)
            {
                if(nums[i]==a)
                {
                    ans.push_back(i);
                }
                if(ans.size()==2)
                {
                    break;
                }
            }
        }
        else
        {
            for(int i=0;i<n;i++)
        {
            if(nums[i]==a)
            {
                ans.push_back(i);
            }
            if(nums[i]==b)
            {
                ans.push_back(i);
            }
        }

        }

        return ans;
    }



int main()
{
    int target=9;
    vector<int> nums={2,7,11,15};

    for(int val : twoSum(nums,target))
    {
        cout<<val<<" ";
    }
    return 0;
}