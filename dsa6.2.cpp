#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums) 
    {
        int num;
        int size=nums.size();

        int ans;
        int count=0;
        
        for(int i=0;i<size-1;i++)
        {
            if(count=0)
            {
                ans=nums[i];
            }
            if(ans==nums[i])
            {
                count++;
            }
            else
            {
                count--;
            }
        }
        return ans;
    }

int main()
{
    vector<int>nums={1,2,2,1,1};

    cout<<majorityElement(nums);
    
    return 0;
}