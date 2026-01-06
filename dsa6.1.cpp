#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums) 
    {
        int num;
        int size=nums.size();

        sort(nums.begin(),nums.end());

        if(size==1)
        {
            return nums[0];
        }

        int count=1;
        
        for(int i=0;i<size-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                count++;
                if(count>size/2)
                {
                    return nums[i];
                }
            }
            else if(nums[i]!=nums[i+1])
            {
                count=1;
            }

        }
        return 0;
    }

int main()
{
    vector<int>nums={1,2,2,1,1};

    cout<<majorityElement(nums);
    
    return 0;
}