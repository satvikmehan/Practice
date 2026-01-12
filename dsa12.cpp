#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int bs(vector<int> nums,int target)
{
    int n=nums.size();
    int start=0;
    int end=n-1;
    int mid;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(target==nums[mid])
        {
            return mid;
        }
        target<nums[mid] ? end=mid-1 : start=mid+1;
    }
    return -1;
}

int search(vector<int>& nums, int target) 
    {
        int k=-1;
        int n=nums.size();
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]>nums[i+1])
            {
                k=i;
                sort(nums.begin(),nums.end());
                break;
            }
        }
        int ans=bs(nums,target);
        if(ans==-1)
        {
            return -1;
        }
        
        if(k==-1)
        {
            return ans;
        }
        
        if(ans + k + 1 < n)
        {
            return ans+k+1;

        }
        else
        {
            return ans + k + 1 - n;

        }
    }

int search(vector<int>& nums, int target) 
    {
        int n=nums.size();
        int mid;
        int st=0;
        int end=n-1;
        while(st<=end)
        {
            mid=st+(end-st)/2;
            if(nums[mid]==target)
            {
                return mid;
            }

            if(nums[st]<=nums[mid])
            {
                if(nums[st]<=target && nums[mid]>target)
                {
                    end=mid-1;
                }
                else
                {
                    st=mid+1;
                }
            }
            else
            {
                if(nums[end]>=target && nums[mid]<target)
                {
                    st=mid+1;
                }
                else
                {
                    end=mid-1;
                }
            }

        }
        return -1;
    
    }




int main()
{
    int target=0;
    vector<int> nums = {1};

    cout<<search(nums,target);

    return 0;
}