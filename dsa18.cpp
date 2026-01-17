#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int minOperations(vector<int>& nums, vector<int>& target) 
    {
        int n=nums.size();
        set<int> distinct;
        for(int i=0;i<n;i++)
            {
                if(nums[i]!=target[i])
                {
                    distinct.insert(nums[i]);
                }
            }
        return distinct.size();
    }




int main()
{
    vector<int> nums={7,3,7};
    vector<int> target={5,5,9};

    cout<<minOperations(nums,target);

    return 0;
}