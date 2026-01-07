#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int maxArea(vector<int>& height) 
    {
        int n=height.size();
        int area=0;
        int left=0;
        int right=n-1;
       while(left<right)
        {
            int h=min(height[left],height[right]);
            area=max(area,h*(right-left));
            (height[left]>height[right])?(right--):(left++);
        }
        return area;
    }

int maxArea1(vector<int>& height) 
    {
        int n=height.size();
        if(n==2)
        {
            return min(height[0],height[1]);
        }
        int area=1;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                area=max(area,((j-i)*min(height[i],height[j])));
            }
        }
        return area;
    }




int main()
{
    vector<int>height={1,8,6,2,5,4,8,3,7};

    cout<<maxArea(height);
    
    return 0;
}