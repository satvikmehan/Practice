#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int vowelConsonantScore(string s) 
{
    int c=0;
    int v=0;

    for(int i :s)
    {
        if(i==97 ||i==101 ||i==105 ||i==111 ||i==117)
        {
            v++;
        }
        else if(i>=97 && i<=122 && i!=97 && i!=101 && i!=105 && i!=111 && i!=117)
        {
            c++;
        }
    }
    if(c==0 || v==0)
    {
        return 0;
    }
    int score=v/c;
    return score;       
}

int main()
{
    string s="au 123";
    cout<<vowelConsonantScore(s);
    
    return 0;
}