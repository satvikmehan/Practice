#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int maxProfit1(vector<int>& prices) 
    {
        int ans=0;
        int n=prices.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                ans=max(ans,prices[j]-prices[i]);
            }
        }
        return ans;

    }

int maxProfit2(vector<int>& prices) 
    {
        int n=prices.size();
        int buy=prices[0];
        int profit=0;
        for(int i=1;i<n;i++)
        {
            if(prices[i]<buy)
            {
                buy=prices[i];
            }
            else
            {
                profit=max(profit,prices[i]-buy); 
            }
        }

    }

int maxProfit(vector<int>& prices) 
    {
        int ans=0;
        int minp=INT_MAX;
        for(int i=0,j=0;i<prices.size();i++)
        {
            ans=max(ans,prices[i]-minp);
            minp=min(minp,prices[i]);
        }
        return ans;
    }



int main()
{
    vector<int>prices={7,1,5,3,8,4};

    cout<<maxProfit(prices);
    
    return 0;
}