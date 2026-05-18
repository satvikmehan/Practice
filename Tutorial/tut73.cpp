#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string,int> marks;
    marks["sam"]=99;
    marks["Lam"]=40;
    marks["Dam"]=33;
    marks["Mam"]=59;
    marks.insert({{"Ram",25},{"Wam",66}});

    map<string,int> :: iterator itr;
    for(itr=marks.begin();itr!=marks.end();itr++)
    {
        cout<<(*itr).first<<" "<<(*itr).second<<endl;
    }
    cout<<marks.size()<<endl;
    cout<<marks.max_size()<<endl;
    cout<<marks.empty()<<endl;
    return 0;
} 