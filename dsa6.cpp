#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int majorityElement1(vector<int>& nums) 
    {
        int num;
        int size=nums.size();
        
        for(int val:nums)
        {
            int count=0;
            for(int elements:nums)
            {
                if(val==elements)
                {
                    count++;
                    if(count>size/2)
                    {
                        return val;
                    }
                }

            }

        }
    }

int majorityElement(vector<int>& nums) 
    {
        int num;
        int n=nums.size();
        int count=1;
        int temp=1;
        sort(nums.begin(),nums.end());
        if(n==1)
        {
            num=nums[0];
            return num;
        }
        else
        {
        nums.push_back(0);
        for(int i=0;i<n;i++)
        {
            while(nums[i]==nums[i+1])
            {
                temp++;
                i++;
            }
            if(temp>count)
            {
                count=temp;
                temp=1;
                num=nums[i];
            }
            else
            {
                temp=1;
            }
        }
        }
        return num;
    }

int main()
{
    vector<int>nums={1,2,2,1,1};

    cout<<majorityElement(nums);
    
    return 0;
}