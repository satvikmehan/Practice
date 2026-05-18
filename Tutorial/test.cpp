#include<iostream>
#include<bits/stdc++.h>
using namespace std;



bool isPalindrome(int x) {
        vector<int> check;
        vector<int> org;
        int final=0;
        int num=0;
        int add;
        if(x>=0)
        {
        while(x>=10)
        {
            x=x/10;
            num++;
        }
        for(int a=0;a<=num;a++)
        {
            add=x%10;
            check.push_back(add);
            x=x/10;
            add=0;
        }
        for(int b=0;b<=num;b++)
        {
            org[b]=check[b];
        }
        reverse(org.begin(),org.end());
        for(int i=0;i<=num;i++)
        {
            if(check[i]==org[i])
            {
                final++;
            }
            else
            {
                return false;
            }
        }
        if(final==num+1)
        {
            return true;
        }
        else
        {
            return false;
        }
        }
        else
        {
            return false;
        }
        return {};
    };


int main()
{
    cout<<isPalindrome(121);
    return 0;
}


    