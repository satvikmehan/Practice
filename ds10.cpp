#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int minTimeToVisitAllPoints1(vector<vector<int>>& points) 
    {
        int n=points.size();
        int xtar;
        int ytar;
        int xdif;
        int ydif;
        int count=0;
        int xstart=points[0][0];
        int ystart=points[0][1];
        for(int i=1;i<n;i++)
        {
            xtar=points[i][0];
            ytar=points[i][1];
            xdif=xstart-xtar;
            if(xdif<0)
            {
                xdif*=-1;
            }
            ydif=ystart-ytar;
            if(ydif<0)
            {
                ydif*=-1;
            }
            while(xdif>0 && ydif>0)
            {
                xdif--;
                ydif--;
                count++;
            }
            if(xdif>0)
            {
                while(xdif>0)
                {
                    count++;
                    xdif--;
                }
            }
            if(ydif>0)
            {
                while(ydif>0)
                {
                    count++;
                    ydif--;
                }
            }
            xstart=xtar;
            ystart=ytar;
        }
    return count;
    }

int minTimeToVisitAllPoints(vector<vector<int>>& points) 
    {
        int n=points.size();
        int xtar;
        int ytar;
        int xdif;
        int ydif;
        int count=0;
        int xstart=points[0][0];
        int ystart=points[0][1];
        for(int i=1;i<n;i++)
        {
            xtar=points[i][0];
            ytar=points[i][1];
            xdif=abs(xstart-xtar);
            ydif=abs(ystart-ytar);
            count+=max(xdif,ydif);
            xstart=xtar;
            ystart=ytar;
        }
    return count;
    }

int main()
{
    vector<vector<int>> points = {{1,1},{3,4},{-1,0}};

    cout<<minTimeToVisitAllPoints(points);

    return 0;
}