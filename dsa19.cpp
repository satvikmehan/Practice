#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int alternatingXOR(vector<int>& nums, int target1, int target2) 
    {
        int n=nums.size();
        int check=target1;
        int count=0;
        int curXOR=0;
        for(int i=0;i<n;i++)
            {
                curXOR^=nums[i];
                
                if(curXOR==check)
                {
                    count++;
                    curXOR=0;
                    if(check==target1)
                    {
                        check=target2;
                    }
                    else
                    {
                        check=target1;
                    }
                }
            }
        return count;
    }

int main()
{
    vector<int> nums={2,3,1,4};
    int target1=1;
    int target2=5;

    cout<<alternatingXOR(nums,target1,target2);
    return 0;
}