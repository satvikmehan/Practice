#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sol;
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums.size();j++)
            {
                if(i!=j)
                {
                    if(nums[i]+nums[j]==target)
                        {
                            sol.push_back(i);
                            sol.push_back(j);
                            return sol;
                        }
                }
                
            }
        }
        return {};
    }    
};

int main()
{
    int size,num,target;
    cin>>size;
    vector<int> arr(size),ans;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cin>>target;
    Solution test;
    ans=test.twoSum(arr,target);
    cout<<"The answer is: "<<ans[0]<<","<<ans[1];
    return 0;
}