#include<iostream>
#include<bits/stdc++.h>
using namespace std;


    vector<int> bestTower(vector<vector<int>>& towers, vector<int>& center, int radius) 
    {
        vector<int> ans;
        int x=center[0];
        int y=center[1];
        vector<vector<int>>rechable;
        for(auto& tower : towers)
            {
                        if(abs(x-tower[0])+abs(y-tower[1])<=radius)
                        {
                            rechable.push_back(tower);
                        }
                    
            }
        if(rechable.size()==0)
        {
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
        vector<vector<int>> final;
        int best=-1;
        for(auto point: rechable)
            {
                if(point[2]>best)
                {
                    best=point[2];
                    final.clear();
                    final.push_back(point);
                }
                else if(point[2]==best)
                {
                    final.push_back(point);
                }
            }
        if(final.size()==1)
                    {
                        ans.push_back(final[0][0]);
                        ans.push_back(final[0][1]);
                        return ans;
                    }
        else
                {
                    vector<vector<int>> tie;
                    int a=INT_MAX;
                    int b=INT_MAX;
                    for(int i=0;i<final.size();i++)
                        {
                            if(final[i][0]<a)
                            {
                                tie.clear();
                                tie.push_back(final[i]);
                                a=final[i][0];
                                b=final[i][1];
                            }
                            else if(final[i][0]==a)
                            {
                                if(final[i][1]<b)
                                {
                                    tie.clear();
                                    tie.push_back(final[i]);
                                    b=final[i][1];  
                                }
                            }
                        }
                    ans.push_back(tie[0][0]);
                    ans.push_back(tie[0][1]);
                    return ans;
                }
                    
        
    return ans;  
}

int main()
{
    vector<vector<int>> towers={{5,6,8}, {0,3,5}};
    vector<int> center={1,2};
    int radius=1;

    for(int val:bestTower(towers,center,radius))
    {
        cout<<val<<" ";
    }
    
    return 0;
}