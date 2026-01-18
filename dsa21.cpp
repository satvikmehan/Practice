#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int maxCapacity(vector<int>& costs, vector<int>& capacity, int budget) 
{
    int n=costs.size();
    vector<pair<int,int>>p;
    for(int i=0;i<n;i++)
    {
        p.push_back({costs[i],capacity[i]});
    }
    sort(p.begin(),p.end());

        vector<int> prefixMax(n);
        prefixMax[0] = p[0].second;

        for(int i = 1; i < n; i++) {
            prefixMax[i] = max(prefixMax[i-1], p[i].second);
        }
        
        int ans=0;
        for(int i = 0; i < n; i++) 
        {
            if(p[i].first < budget) 
            {
            ans = max(ans, p[i].second);
            }
            int remaining = budget - p[i].first - 1;
            if(remaining < 0) continue;
        

         int j = upper_bound(
                p.begin(),
                p.end(),
                make_pair(remaining, INT_MAX)
            ) - p.begin() - 1;

            if(j >= 0) {
                int validIdx = min(j, i - 1);
                if(validIdx >= 0)
                {
                    ans = max(ans, p[i].second + prefixMax[validIdx]);
                }
                
            }
        }
        return ans;
}

int main()
{
    vector<int> costs={4,8,5,3};
    vector<int> capacity={1,5,2,7};
    int budget=8;

    cout<<maxCapacity(costs,capacity,budget);
    
    return 0;
}