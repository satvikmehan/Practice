#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int hIndex1(vector<int> &citations)
{
    int n = citations.size();
    int high = n;
    int count = 0;
    while (high > 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (citations[i] >= high)
            {
                count++;
            }
        }
        if (count>=high)
        {
            return high;
        }
        else
        {
            high--;
            count=0;
        }
    }
    return 0;
}

int hIndex(vector<int> &citations)
{
    int n = citations.size();
    sort(citations.begin(),citations.end());
    for(int i=0;i<n;i++)
    {
        int h=n-i;
        if(citations[i]>=h)
        {
            return h;
        }
    }
    return 0;
}



int main()
{
    vector<int> citations={3,0,6,1,5};
    cout<<hIndex(citations);
}