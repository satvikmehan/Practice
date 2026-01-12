#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf1(vector<int> &nums)
{
    int n = nums.size();
    vector<int> ans;
    int product = 1;
    int newPro=1;
    int count=0;
    for (int i = 0; i < n; i++)
    {
        product *= nums[i];
    }
    for(int x : nums)
    {
        if(x!=0)
        {
            count++;
            newPro *= x;
        }  
    }
    if (count==1)
    {
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                ans.push_back(newPro);
            }
            else
            {
                ans.push_back(0);
            }
        }
    }
    else if (count>1)
    {
        for(int i=0;i<n;i++)
        {
            ans.push_back(0);
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            ans.push_back(product / nums[i]);
        }
    }
    return ans;
}

vector<int> productExceptSelf2(vector<int> &nums)
{
    int n = nums.size();
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int product = 1;
        for (int j = 0; j < n; j++)
        {
            if (j != i)
            {
                product *= nums[j];
            }
        }
        ans.push_back(product);
    }
    return ans;
}

vector<int> productExceptSelf0(vector<int> &nums)
{
    int n = nums.size();
    vector<int> ans;
    vector<int> suffix(n,1);
    vector<int> prefix(n,1);
    prefix[0]=1;
    for(int i=1;i<n;i++)
    {
        prefix[i]=prefix[i-1]*nums[i-1];
    }
    suffix[n-1]=1;
    for(int i=n-2;i>=0;i--)
    {
        suffix[i]=suffix[i+1]*nums[i+1];
    }
    for(int i=0;i<n;i++)
    {
        ans.push_back(prefix[i]*suffix[i]);
    }
    return ans;
}

vector<int> productExceptSelf(vector<int> &nums)
{
    int n = nums.size();
    vector<int> ans(n,1);
    for(int i=1;i<n;i++)
    {
        ans[i]=ans[i-1]*nums[i-1];
    }

    int suffix=1;
    for(int i=n-2;i>=0;i--)
    {
        suffix*=nums[i+1];
        ans[i]*=suffix;
    }
    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4};

    for (int val : productExceptSelf(nums))
    {
        cout << val << " ";
    }

    return 0;
}